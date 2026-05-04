class Solution {
public:
bool isprime(int n){
    if(n<=1) return false;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
    int sumOfPrimesInRange(int n) {
        int rev=0;
        int temp=n;
        while(n>0){
            int digit=n%10;
            rev=rev*10+digit;
            n/=10;
        }
        int sum=0;
        if(temp>rev){
        
            for(int i=rev;i<=temp;i++){
                if(isprime(i)){
                  sum+=i;
                }
            }
        }
        else{
             for(int i=temp;i<=rev;i++){
                if(isprime(i)){
                  sum+=i;
                }
            }

        }
        return sum;
    }
};