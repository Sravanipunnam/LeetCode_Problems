class Solution {
public:
 bool func(int mid,vector<int>& piles,int k){
    long long  sum=0;
    for(int i=0;i<piles.size();i++){
        sum+=(piles[i]+mid-1)/mid;
    }
    if(sum<=k){
        return true;
    }
    return false;
 }
    int minEatingSpeed(vector<int>& piles, int k) {
        int maxi=*max_element(piles.begin(),piles.end());
        int ans=0;
        long long l=1,h=maxi;
        while(l<=h){
            long long mid=l+(h-l)/2;
            if(func(mid,piles,k)){
                ans=mid;
                h=mid-1;
            }else{
                l=mid+1;
            }
        }
        return ans;
        
    }
};