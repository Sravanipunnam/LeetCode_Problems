class Solution {
public:
long long count(vector<int>&nums,int k,int m){
    long long distinct=0;
    long long ans=0;
    int i=0,j=0;
    int n=nums.size();
    long long good=0;
    int r=0;
    unordered_map<int,int>mp;
    while(j<n){
       mp[nums[j]]++;
       if(mp[nums[j]]==m) good++;
       if(mp[nums[j]]==1) distinct++;
       while(distinct>k){
        if(mp[nums[i]]==m) {
            good--;
        }
        mp[nums[i]]--;
        if(mp[nums[i]]==0) {
            
            distinct--;
        mp.erase(nums[i]);
        }
        i++;
        r=0;
       }
     while(mp[nums[i]]>m){
           
        mp[nums[i]]--;
        i++;
        r++;
     }
      if(good==k && distinct==k){
       ans=ans+r+1;
      }
       j++;

    }
    return ans;
    
}
    long long countSubarrays(vector<int>& nums, int k, int m) {
        long long ans=count(nums,k,m);
        return ans;
    }
};