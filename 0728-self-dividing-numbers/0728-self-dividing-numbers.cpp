class Solution {
public:
bool selfd(int n){
 int temp=n;
    while(n>0){
        int digit=n%10;
        if(digit==0){
            return false;
        }
        if(temp%digit!=0){
            return false;
        }
        n/=10;
    }
    return true;
}
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int>ans;
        for(int i=left;i<=right;i++){
            if(selfd(i)){
                ans.push_back(i);
            }
        }
        return ans;
    }
};