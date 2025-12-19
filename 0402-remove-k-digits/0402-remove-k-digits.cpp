class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char>st;
        string res="";
        int i;
        if(num.size()<=k){
            return "0";
        }
        for(int i=0;i<num.size();i++){
            while(!st.empty() && k>0 && st.top()>num[i]){
                st.pop();
                k--;
            }
            st.push(num[i]);
        }
       while(k>0 && !st.empty()){
        st.pop();
        k--;
       }
       while(!st.empty()){
        res+=st.top();
        st.pop();
       }
        reverse(res.begin(),res.end());
       i=0;
      while(i<res.size() && res[i]=='0'){
        i++;
      }
      res=res.substr(i);
        if(res.size()==0){
            return "0";
        }
        return res;

        
    }
};