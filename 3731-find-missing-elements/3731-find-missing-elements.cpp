class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int st=nums[0];
        vector<int>ans;
        for(int i=1;i<nums.size();i++){
           while(nums[i]!=st+1){
            ans.push_back(st+1);
            st++;
           }
           st=nums[i];
        }
        return ans;
    }
};