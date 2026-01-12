class Solution {
public:
void Find(vector<vector<int>>&ans,vector<int>res,vector<int>nums,int ind){
    if(ind>=nums.size()){
        ans.push_back(res);
        return;
    }
    res.push_back(nums[ind]);
    Find(ans,res,nums,ind+1);
    res.pop_back();
    Find(ans,res,nums,ind+1);

}
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>res;
        Find(ans,res,nums,0);
        return ans;
        
    }
};