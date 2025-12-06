class Solution {
public:
    bool validateStackSequences(vector<int>& p, vector<int>& po) {
        stack<int>st;
        int n=p.size();
        int l=0;
        for(int i=0;i<n;i++){
            st.push(p[i]);
            while(!st.empty() && st.top()==po[l]){
                st.pop();
                l++;
            }
        }
        for(int i=l;i<n;i++){
            if(!st.empty() && st.top()==po[i]){
                st.pop();
            }
        }
        return st.empty();
    
        
    }
};