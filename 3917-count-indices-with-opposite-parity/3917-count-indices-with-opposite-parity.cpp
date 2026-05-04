class Solution {
public:
    vector<int> countOppositeParity(vector<int>& nums) {
        int te=0,to=0;
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0) te++;
            else to++;
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0){
                te--;
                ans.push_back(to);
            }else{
                to--;
                ans.push_back(te);
            }
        }
        return ans;
    }
};