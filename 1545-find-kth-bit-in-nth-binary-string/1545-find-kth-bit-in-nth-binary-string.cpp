class Solution {
public:
string isinvert(string s){
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '0')
            s[i] = '1';
        else
            s[i] = '0';
    }
    return s;
}
    char findKthBit(int n, int k) {
        string res="0";

        for(int i=1;i<n;i++){
           
            string rev=(isinvert(res));
            reverse(rev.begin(),rev.end());
            res+='1'+rev;
        }
         return res[k-1];
    }
   
};