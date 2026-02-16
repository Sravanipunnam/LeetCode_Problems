class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& b) {
        map<int,int>mp;
        for(int i=0;i<b.size();i++){
            mp[b[i]]++;
        }
        vector<int>ans;
        for(auto &it:mp){
            int res=it.second;
            if(res%2!=0){
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};