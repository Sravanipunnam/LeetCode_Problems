class Solution {
public:
    vector<int> asteroidCollision(vector<int>& a) {
        stack<int>st;
        vector<int>ans;
        for(int i=0;i<a.size();i++){
            if(a[i]>0){
                st.push(a[i]);
            }else{
                while(!st.empty()&& st.top()>0 && st.top()<abs(a[i])){
                    st.pop();
                }
                if(st.empty() || st.top()<0){
                    st.push(a[i]);
                }else if(st.top()==abs(a[i])){
                    st.pop();
                }
          
            }
            
        }
       
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
     reverse(ans.begin(),ans.end());
        return ans;
        
        
    }
};