class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int,int>mpp;
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
             if(mpp.find(nums[i])!=mpp.end()){
                ans.push_back(nums[i]);
             }
             mpp[nums[i]]++;
        }
        return ans;
    }
};