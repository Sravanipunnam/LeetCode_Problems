class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<int>visited(n+1,0);
        vector<vector<int>> adj(n);
        queue<int>q;
         for(auto &e : edges) {
            adj[e[0]].push_back(e[1]);
            adj[e[1]].push_back(e[0]); 
        }
        q.push(source);
        visited[source]=1;
        while(!q.empty()){
            int node=q.front();       
            if(node==destination) return true;
            q.pop();
            for(auto &it:adj[node]){
                if(visited[it]!=1){
                    visited[it]=1;
                    q.push(it);

                }
            }
            
        }
        return false;
    }
};