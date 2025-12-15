class Solution {
public:
    long long getDescentPeriods(vector<int>& prices) {
        long long ans=0;
        long long cnt=0;
        for(int i=1;i<prices.size();i++){
            if(prices[i-1]==prices[i]+1){
                cnt++;
            }
            else{
                cnt=0;
            }
            ans+=(cnt+1);
        }
        return ans+1;

    }
};