class Solution {
public:
int rob1(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n);
        dp[0]=nums[0];
        for(int i=1;i<nums.size();i++){
            int take=nums[i];
            if(i>1){
                take+=dp[i-2];
            }
            int nontake=dp[i-1];
            dp[i]=max(take,nontake);
        }
        return dp[n-1];
        
    }
    int rob(vector<int>& nums) {
        vector<int>temp1,temp2;
        if(nums.size()==1){
            return nums[0];
        }
        for(int i=0;i<nums.size();i++){
            if(i!=0) temp1.push_back(nums[i]);
            if(i!=nums.size()-1) temp2.push_back(nums[i]);
        }
        return max(rob1(temp1),rob1(temp2));
        
    }
};