class Solution {
public:
    string removeDuplicateLetters(string s) {
         vector<int>vis(26,0);
       vector<int>last(26);
       for(int i=0;i<s.size();i++){
        last[s[i]-'a']=i;
       }

       stack<char>st;
       st.push(s[0]);
       vis[s[0]-'a']++;
       for(int i=1;i<s.size();i++){
        if(!vis[s[i]-'a'] ){
            while(!st.empty() && st.top()>s[i] && i<last[st.top()-'a']){
                vis[st.top()-'a']--;
                st.pop();

            }
            st.push(s[i]);
            vis[st.top()-'a']++;   
        }
        else{
             continue;
        }
       }
       string ans="";
       while(!st.empty()){
        ans+=st.top();
        st.pop();
       }
       reverse(ans.begin(),ans.end());
      return ans;
    }
};