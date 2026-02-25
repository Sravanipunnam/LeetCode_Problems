class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
       priority_queue<pair<int,int>,
           vector<pair<int,int>>,
           greater<pair<int,int>
           >>pq;
       for(int i=0;i<arr.size();i++){
        int count=__builtin_popcount(arr[i]);
        pq.push({count,arr[i]});
       } 
       vector<int>ans;
      while(!pq.empty()){
        ans.push_back(pq.top().second);
        pq.pop();
      }
      return ans;
    }
};