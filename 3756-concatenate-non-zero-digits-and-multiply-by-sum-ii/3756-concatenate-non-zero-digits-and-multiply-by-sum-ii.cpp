// class Solution {
// public:
//     const int mod=1e9+7;
//     vector<int> sumAndMultiply(string s, vector<vector<int>>& q) {
//         int n=s.size();
//         vector<long long>digit(n,0);
//         vector<int>nonzero(n,0),sum(n,0);
//         int tmp=s[0]-'0';
//         if(tmp>0){
//             nonzero[0]=1;
//         }
//         sum[0]=tmp;
//         digit[0]=tmp; 
//         for(int i=1;i<n;i++){
//              if(s[i]-'0'==0){
//                 digit[i]=digit[i-1];
//                 nonzero[i]=nonzero[i-1];
//                 sum[i]=sum[i-1];
//              }
//              else{
//                 nonzero[i]=nonzero[i-1]+1;
//                 digit[i]=(digit[i-1]*10+(s[i]-'0'))%mod;
//                 sum[i]=sum[i-1]+(s[i]-'0');

//              }
//         }
//        vector<int>ans;
//         for(int i=0;i<q.size();i++){
//             int st=q[i][0];
//             int end=q[i][1];
//             int add=0;
//             if(st==0) add=sum[end];
//              else add=sum[end]-sum[st-1];
//              int power = nonzero[end];

//              if(st>0)
//              power -= nonzero[st-1];
//              long long digi=digit[end];
//               if(st>0) digi-=(digit[st-1]*pow(10,power))%mod;
//              ans.push_back(digi*add);
//         }
//         return ans;
//     }
// };

class Solution {
public:
    const int mod = 1e9 + 7;

    vector<int> sumAndMultiply(string s, vector<vector<int>>& q) {
        int n = s.size();

        vector<long long> digit(n, 0), power10(n + 1, 1);
        vector<int> nonzero(n, 0), sum(n, 0);

        for (int i = 1; i <= n; i++)
            power10[i] = (power10[i - 1] * 10) % mod;

        if (s[0] != '0') {
            digit[0] = s[0] - '0';
            sum[0] = s[0] - '0';
            nonzero[0] = 1;
        }

        for (int i = 1; i < n; i++) {

            digit[i] = digit[i - 1];
            sum[i] = sum[i - 1];
            nonzero[i] = nonzero[i - 1];

            if (s[i] != '0') {
                digit[i] = (digit[i] * 10 + (s[i] - '0')) % mod;
                sum[i] += s[i] - '0';
                nonzero[i]++;
            }
        }

        vector<int> ans;

        for (auto &it : q) {

            int st = it[0];
            int end = it[1];

            int add = sum[end];
            if (st > 0)
                add -= sum[st - 1];

            int len = nonzero[end];
            if (st > 0)
                len -= nonzero[st - 1];

            long long digi = digit[end];

            if (st > 0) {
                digi = (digi -
                       (digit[st - 1] * power10[len]) % mod +
                       mod) % mod;
            }

            ans.push_back((digi * add) % mod);
        }

        return ans;
    }
};