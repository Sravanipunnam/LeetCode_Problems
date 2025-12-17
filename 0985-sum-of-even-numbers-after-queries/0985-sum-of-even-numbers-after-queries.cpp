class Solution {
public:
int issum(vector<int>& nums){
    int sum=0;
    for(int i=0;i<nums.size();i++){
        if(nums[i]%2==0){
        sum+=nums[i];
        }
    }
    return sum;
}
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        vector<int>ans;
        for(int i=0;i<queries.size();i++){
            int qsum=queries[i][0];
            nums[queries[i][1]]=nums[queries[i][1]]+qsum;
            int sum=issum(nums);
            ans.push_back(sum);
        }
         return ans;
    }
   
};