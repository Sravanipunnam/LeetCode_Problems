class Solution {
public:
    int bitwiseComplement(int n) {
       if(n==0) return 1;
       string binary="";
       while(n>0){
        binary+=char((n%2)+'0');
        n/=2;
       } 
       reverse(binary.begin(),binary.end());
       for(char &c:binary){
        if(c=='1') {
            c='0';
        }else{
            c='1';
        }
       }
       long long ans=0;
       for(char ch:binary){
        ans=ans*2+(ch-'0');
       }
       return ans;
    }
};