class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i=0,j=0;
        int sum=0;
        int mini=1e9;
        while(j<nums.size()){
            sum+=nums[j];
           while(sum>=target){
             mini=min(mini,j-i+1);
            //  cout<<mini<<" "<<sum<<"\n";
             sum-=nums[i];
             i++;
           }
           
           j++;
        }
          return mini==1e9?0:mini;
    }
};