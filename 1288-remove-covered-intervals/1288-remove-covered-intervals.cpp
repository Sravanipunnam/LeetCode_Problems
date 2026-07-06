class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& in) {
       sort(in.begin(),in.end(),[](vector<int>&a,vector<int>&b){
          if(a[1]==b[1]){
            return a[0]<b[0];
          }
          return a[1]>b[1];
       });
       int count=1;
       int start=in[0][0];
       int end=in[0][1];
       for(int i=1;i<in.size();i++){
           int cs=in[i][0];
           int ce=in[i][1];
           if(start<=cs){
            continue;
           }
           else{
            count++;
            start=cs;
            end=ce;
           }

       }
       return count;
    }
};