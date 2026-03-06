class Solution {
public:
    bool checkOnesSegment(string s) {
        if(s.size()==1 && s[0]=='1') return true;
         int count=0;
         int i=0;
       while(i<s.size()){
       if(s[i]=='0'){
        break;
       }
       i++;
       }
        for(int k=i;k<s.size();k++){
            if(s[k]=='1'){
                return false;
            }
        }
        return true;
        
    }
};