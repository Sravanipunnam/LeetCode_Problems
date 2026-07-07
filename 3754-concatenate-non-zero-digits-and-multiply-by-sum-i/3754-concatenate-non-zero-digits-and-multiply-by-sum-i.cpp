class Solution {
public:
    long long sumAndMultiply(int n) {
        long long digits=0;
        long long sum=0;
        while(n>0){
            if(n%10!=0){
           digits=digits*10+(n%10);
           sum+=(n%10);
            }
             n/=10;
        }
        string res=to_string(digits);
        reverse(res.begin(),res.end());
        return stoi(res)*sum;
    }
};