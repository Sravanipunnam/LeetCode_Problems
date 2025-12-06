class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        vector<vector<int>>ans(image.size(),vector<int>(image[0].size()));
        int n=image[0].size();
        for(int i=0;i<image.size();i++){
            for(int j=0;j<image[0].size();j++){
                ans[i][j]=image[i][n-j-1];
                if(ans[i][j]==0){
                    ans[i][j]=1;
                }
                else{
                    ans[i][j]=0;
                }
            }
        }
        return ans;
    }
};