class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            while(nums[i]>=1 && nums[i]<=nums.size() && nums[i]!=nums[nums[i]-1] ){
                swap(nums[i],nums[nums[i]-1]);
            }
        }
        int ans=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=i+1){
                ans=i+1;
                break;
            }
        }
        if(ans==0){
            return nums.size()+1;
        }
        return ans;
        
    }
};