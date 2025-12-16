class Solution {
public:
    int numRookCaptures(vector<vector<char>>& b) {
        int r=b.size();
        int c=b[0].size();
        int cnt=0;
        int row;
        int col;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(b[i][j]=='R'){
                   row=i;
                   col=j;
                }
            }
        }
        for(int i=row;i<r;i++){
            if(b[i][col]=='p'){
                cnt++;
                break;
            }
            else if(b[i][col]=='B'){
                break;
            }
        }
        for(int i=row;i>=0;i--){
               if(b[i][col]=='p'){
                cnt++;
                break;
            }else if(b[i][col]=='B'){
                break;
            }
         
        }
        for(int i=col;i<c;i++){
                if(b[row][i]=='p'){
                cnt++;
                break;
            }
            else if(b[row][i]=='B'){
                break;
            }
        }
          for(int i=col;i>=0;i--){
                if(b[row][i]=='p'){
                cnt++;
                break;
            }
            else if(b[row][i]=='B'){
                break;
            }
        }
        return cnt;
    }
};