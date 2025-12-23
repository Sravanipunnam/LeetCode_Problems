class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int n=arr.size();
        int sum=0;
        for(int i=0;i<arr.size();i++){
            // int s=i+1;
            // int e=n-i;
            int s=ceil((i+1)*(n-i)/2.0);
            sum+=s*arr[i];
        
        }
       return sum;
    }
};