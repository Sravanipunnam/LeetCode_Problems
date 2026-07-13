class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        queue<int>q;
        vector<int>res;
        for (int i = 1; i <= 9; i++)
            q.push(i);
        while(!q.empty()){
            int n=q.front();
            q.pop();
            if(n>high){
                continue;
            }
            if(n>=low && n<=high){
                res.push_back(n);
            }
            int ones=(n%10)+1;
            if(ones-1<9)
            q.push(n*10+ones);
        }  
        return res;
       
    }
};