class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>res(n);
     
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                res[i]=nums[(nums[i]+i)%n];
            }
            else if(nums[i]==0){
                res[i]=nums[i];
            }
            else{
                  int idx = ((i + nums[i]) % n + n) % n;
                  res[i]=nums[idx];
            }
        }
      return res;
    }
};