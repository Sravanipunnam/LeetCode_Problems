class Solution {
public:
    void gameOfLife(vector<vector<int>>& b) {
        int n=b.size()-1;
        int m=b[0].size()-1;
       vector<pair<int,int>>mp;
        for(int i=0;i<b.size();i++){
            for(int j=0;j<b[0].size();j++){
                int sum=0;
                if(b[i][j]==0){
                    sum=((i-1>=0 && j-1>=0 && i-1<=n && j-1<=m)?b[i-1][j-1]:0)+
                        ((i-1>=0 && j>=0 && i-1<=n && j<=m)?b[i-1][j]:0)+
                        ((i-1>=0 && j+1>=0 && i-1<=n && j+1<=m)?b[i-1][j+1]:0)+
                        ((i>=0 && j-1>=0 && i<=n && j-1<=m)?(b[i][j-1]):0)+
                        ((i>=0 && j+1>=0 && i<=n && j+1<=m)?(b[i][j+1]):0)+
                        ((i+1>=0 && j-1>=0 && i+1<=n && j-1<=m)?(b[i+1][j-1]):0)+
                        ((i+1>=0 && j>=0 && i+1<=n && j<=m)?(b[i+1][j]):0)+
                        ((i+1>=0 && j+1>=0 && i+1<=n && j+1<=m)?(b[i+1][j+1]):0);
                     if(sum==3){
                        mp.push_back({i,j});
                     }
                }

                else{
                        
                    
                        sum=((i-1>=0 && j-1>=0 && i-1<=n && j-1<=m)?b[i-1][j-1]:0)+
                        ((i-1>=0 && j>=0 && i-1<=n && j<=m)?b[i-1][j]:0)+
                        ((i-1>=0 && j+1>=0 && i-1<=n && j+1<=m)?b[i-1][j+1]:0)+
                        ((i>=0 && j-1>=0 && i<=n && j-1<=m)?(b[i][j-1]):0)+
                        ((i>=0 && j+1>=0 && i<=n && j+1<=m)?(b[i][j+1]):0)+
                        ((i+1>=0 && j-1>=0 && i+1<=n && j-1<=m)?(b[i+1][j-1]):0)+
                        ((i+1>=0 && j>=0 && i+1<=n && j<=m)?(b[i+1][j]):0)+
                        ((i+1>=0 && j+1>=0 && i+1<=n && j+1<=m)?(b[i+1][j+1]):0);
                   
                     if(sum!=2 && sum!=3){
                      mp.push_back({i,j});
                     }
                
                }
            
                   

            }
        }
         for(auto &it:mp){
                    int i=it.first;
                    int j=it.second;
                  if(b[i][j]==0){
                    b[i][j]=1;
                  }else{
                    b[i][j]=0;
                  }
        }
        
    }
};