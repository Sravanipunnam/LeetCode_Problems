class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int maxprofit=0;
       int currprofit=0;
       int buyprice=prices[0];
       for(int i=1;i<prices.size();i++){
        currprofit=prices[i]-buyprice;
        if(currprofit>maxprofit){
            maxprofit=currprofit;
        }
        if(prices[i]<buyprice){
            buyprice=prices[i];
        }
       }
       return maxprofit;
    }
};