class Solution {
public:
void dfs(vector<vector<int>>& g,vector<vector<int>>&time,int i,int j,int curr){
       int n=g.size(),m=g[0].size();
    if(i<0 || i>=n || j<0 || j>=m || curr>=time[i][j] || g[i][j]==0 ){
        return;
    }
    time[i][j]=curr;
    dfs(g,time,i+1,j,curr+1);
    dfs(g,time,i-1,j,curr+1);
    dfs(g,time,i,j+1,curr+1);
    dfs(g,time,i,j-1,curr+1);
}
    int orangesRotting(vector<vector<int>>& g) {
        int n=g.size(),m=g[0].size();
        vector<vector<int>>time(n,vector<int>(m,INT_MAX));
        if(g.size()==0){
            return 0;
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(g[i][j]==2){
                    dfs(g,time,i,j,0);
                }
            }
        }
        int req=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(g[i][j]==1){
                   if(time[i][j]==INT_MAX){
                    return -1;
                   }
                   req=max(req,time[i][j]);
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout<<time[i][j]<<" ";
            }
            cout<<endl;
        }
        return req;
    }
};