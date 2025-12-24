class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int sum=0;
        for(int i=0;i<apple.size();i++){
             sum+=apple[i];
        }
        int count=0;
        sort(capacity.begin(),capacity.end());
        for(int i=capacity.size()-1;i>=0;i--){
           if(sum<=0){
            break;
           }
           count++;
           sum-=capacity[i];
        }
        return count;
    }
};