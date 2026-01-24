class Solution {
public:
    int minPairSum(vector<int>& nums) {
      sort(nums.begin(),nums.end());
      int left=0,right=nums.size()-1;
      int maxi=INT_MIN;
      while(left<right){
        int sum=nums[left++]+nums[right--];
        maxi=max(maxi,sum);

      }
      return maxi;
    }
};