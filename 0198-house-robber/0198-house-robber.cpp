class Solution {
public:
 int rob(int ind,vector<int>&nums,vector<int>&dp,int size)
{
    if(size==1) return nums[0];
         dp[0] = nums[0];
        dp[1] = max(nums[0], nums[1]);
  
    if(dp[ind]!=-1) return dp[ind];
    int pick;
   for(int i=2;i<size;i++)
   {
   
    pick=nums[i]+dp[i-2];
    int notpick=0+dp[i-1];
    dp[i]=max(pick,notpick);
   }
   return dp[size-1];

}
    
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n+1,-1);
       return rob(n-1,nums,dp,n);
    }
};