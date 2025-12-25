class Solution {
public:
    long long maximumHappinessSum(vector<int>& h, int k) {
        long long sum=0;
        sort(h.begin(),h.end());
        int count=0;
        int n=h.size();
    
        for(int i=h.size()-1;i>=0;i--){
            if(count==k ){
                break;
            }
            long long curr=h[i]-count;
            if(curr>=0){
             sum+=(h[i]-count);
            }
         
           count++;
        }
        return sum;

    }
};