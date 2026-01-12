class Solution {
public:
void Find(vector<vector<int>>&ans,vector<int>ds,int target,int ind,vector<int>arr){
    if(ind==arr.size()){
        if(target==0){
            ans.push_back(ds);
        }
        return;
    }
    if(arr[ind]<=target){
        ds.push_back(arr[ind]);
        Find(ans,ds,target-arr[ind],ind,arr);
        ds.pop_back();
    }
    Find(ans,ds,target,ind+1,arr);
}
    vector<vector<int>> combinationSum(vector<int>& arr, int target) {
       vector<vector<int>>ans;
       vector<int>ds;
       Find(ans,ds,target,0,arr); 
       return ans;
    }
};