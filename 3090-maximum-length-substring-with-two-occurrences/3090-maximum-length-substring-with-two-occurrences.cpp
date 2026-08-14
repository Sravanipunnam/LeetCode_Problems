class Solution {
public:
    int maximumLengthSubstring(string s) {
        int maxlen=0;
        int len=0;
       for(int i=0;i<s.size();i++){
         len=0;
        unordered_map<char,int>mpp;
        for(int j=i;j<s.size();j++){
           
            mpp[s[j]]++;
          
            if(mpp[s[j]]>2){
               break;
            }
              len++;

        }
          maxlen=max(maxlen,len);
       }
       return maxlen;
    }
};