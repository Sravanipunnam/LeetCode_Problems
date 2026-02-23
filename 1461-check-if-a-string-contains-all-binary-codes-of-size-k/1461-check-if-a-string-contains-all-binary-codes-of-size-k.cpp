class Solution {
public:
    bool hasAllCodes(string s, int k) {
        if(s.size()<k){
            return false;
        }
        unordered_set<string>st;
        for(int i=k;i<=s.size();i++){
           string ans= s.substr(i-k,k);
           st.insert(ans);
        }
        int count= st.size();
        if(count==(1<<k)){
            return true;
        }
        return false;
    }
};