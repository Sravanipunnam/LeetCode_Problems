class Solution {
public:
    int nextGreaterElement(int n) {
        vector<int>nums;
        while(n>0){
            nums.push_back(n%10);
            n/=10;
        }
        reverse(nums.begin(),nums.end());
       if(!next_permutation(nums.begin(),nums.end())){
        return -1;
       }
     string ans="";
       for(int i=0;i<nums.size();i++){
         ans+=nums[i]+'0';
       }
       cout<<ans<<" ";
       long long res=stoll(ans);
        if(res>INT_MAX){
            return -1;
        }
        return (int)res;
    }
};