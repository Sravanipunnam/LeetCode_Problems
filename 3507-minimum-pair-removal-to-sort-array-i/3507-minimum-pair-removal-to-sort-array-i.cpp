class Solution {
public:
 bool issorted(vector<int>&nums){
    for(int i=0;i<nums.size()-1;i++){
        if(nums[i]>nums[i+1]){
            return false;
        }
    }
    return true;
 }
    int minimumPairRemoval(vector<int>& nums) {
      int ans=0;
      if(issorted(nums)){
        return ans;
      }
      while(true){
        int  mini=INT_MAX,sum=0,index=-1;
        for(int i=0;i<nums.size()-1;i++){
            sum=nums[i]+nums[i+1];
            if(sum<mini){
                mini=sum;
                index=i;
            }
        }
        ans++;
        nums[index]=mini;
        nums.erase(nums.begin()+index+1);
        if(issorted(nums)){
             return ans;
        }

      }
      return ans;
    }
};