class Solution {
    long long isconcat(int l ,int r){
       
       return stoll(to_string(l)+to_string(r));
    }
public:
    long long findTheArrayConcVal(vector<int>& nums) {
        long long ans=0;
        int l=0,r=nums.size()-1;
        while(l<=r){
          if(l==r){
            ans+=nums[l];
            break;
          }
          ans+=isconcat(nums[l],nums[r]);
          l++;
          r--;
        }
        
        return ans;
        
    }
};