class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
     vector<int>pf(nums.size());
     if(nums[0]%2!=0){
        pf[0]=1;
     }else{
        pf[0]=0;
     }
     unordered_map<int,int>mp;
     for(int i=1;i<nums.size();i++){
        if(nums[i]%2!=0){
            pf[i]=pf[i-1]+1;
        }
        else{
            pf[i]=pf[i-1];
        }
     }
     mp[0]=1;
     int count=0;
     for(int i=0;i<nums.size();i++){
      if(mp.count(pf[i]-k)){
        count+=mp[pf[i]-k];
      }
      mp[pf[i]]++;
     }
return count;
    }
};