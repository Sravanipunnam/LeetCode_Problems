class Solution {
public:
    vector<int> busiestServers(int k, vector<int>& a, vector<int>& l) {
        set<int>s;
        map<int,int>mp;
        vector<int>ans;
        
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
        if(a.size()>=k){
        for(int i=0;i<k;i++){
            pq.push({(a[i]+l[i]),i});
            mp[i]++;
        }
        for(int i=k;i<a.size();i++){
            while(pq.top().first<=a[i] && !pq.empty()){
                s.insert(pq.top().second);
                pq.pop();
             
            }
            if(s.empty()){
                continue;
            }
          int lb=i%k;
          auto it=lower_bound(s.begin(),s.end(),lb);
          int value=*it;
          int server;
          if(it == s.end()){
            value=*s.begin();
          }
           mp[value]++;
          pq.push({a[i]+l[i],value}); 
            s.erase(value);  
        }
        int maxi=0;
      for(auto it: mp){
        maxi=max(maxi,it.second);
      }
      for(auto it:mp){
        if(it.second==maxi){
            ans.push_back(it.first);
        }
      }

        }else{
            for(int i=0;i<a.size();i++){
                ans.push_back(i);
            }
        }
     return ans;
    }
};