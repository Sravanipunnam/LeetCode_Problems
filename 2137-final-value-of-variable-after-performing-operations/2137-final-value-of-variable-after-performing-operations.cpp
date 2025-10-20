class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int sum=0;
        for(string i: operations)
        {
            if(i=="++X" || i=="X++")
            {
                sum++;
            }
            else{
                sum--;
            }
        }
        return sum;
    }
};