class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& b) {
        vector<set<char>>row(9),col(9),box(9);
        for(int i=0;i<b.size();i++){
            for(int j=0;j<b[0].size();j++){
                if(b[i][j]=='.'){
                    continue;
                }
                int ch=b[i][j];
                int k=(3*(i/3)+(j/3));
                if(row[i].count(ch)|| col[j].count(ch)|| box[k].count(ch)) return false;
                row[i].insert(ch);
                col[j].insert(ch);
                box[k].insert(ch);

            }
        }
        return true;
    }
};