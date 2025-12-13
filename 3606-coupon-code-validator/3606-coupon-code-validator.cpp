class Solution {
public:
    vector<string> validateCoupons(vector<string>& code, vector<string>& businessLine, vector<bool>& isActive) {
        vector<string>ans;
        vector<pair<string,string>>v;
        vector<string>lines={"electronics","grocery","pharmacy","restaurant"};
        unordered_map<string,int>mp;
        for(int i=0;i<lines.size();i++){
            mp[lines[i]]=i;
        }
      for(int i=0;i<code.size();i++){
        if(code[i].empty()) continue;
        if(!isActive[i]) continue;
        if(mp.find(businessLine[i])==mp.end()) continue;
        bool isValid=true;
        for(char c:code[i]){
            if(!(isalnum(c) || c=='_')){
                isValid=false;
                break;
            }
        }
        if(!isValid) continue;
        v.push_back({businessLine[i],code[i]});

      }
      sort(v.begin(),v.end(),[&](pair<string,string>&a,pair<string,string>&b){
        if(mp[a.first]!=mp[b.first]){
            return mp[a.first]<mp[b.first];
        }
        return a.second<b.second;
      });
      for(auto it:v){
        ans.push_back(it.second);
      }
      return ans;
        
    }
};