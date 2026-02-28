class Solution {
public:
    int concatenatedBinary(int n) {
        long long MOD=1e9+7;
        long long ans=0;
        for(int i=1;i<=n;i++){
            string s=bitset<32>(i).to_string(); 
             s = s.substr(s.find('1')); 
        for(char c:s){
            ans=(ans*2+(c-'0'))%MOD;
        }
        }

        return ans;
     
    }
};