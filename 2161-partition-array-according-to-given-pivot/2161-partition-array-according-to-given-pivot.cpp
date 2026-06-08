class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int>res;
        vector<int>res1;
        vector<int>res2;
        vector<int>res3;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<pivot)
            {
                res1.push_back(nums[i]);
            }
            else if(nums[i]==pivot)
            {
                res2.push_back(nums[i]);
            }
            else
            {
                res3.push_back(nums[i]);
            }
        }
        for(int i=0;i<res1.size();i++)
        {
            res.push_back(res1[i]);
        }
        for(int i=0;i<res2.size();i++)
        {
            res.push_back(res2[i]);
        }
        for(int i=0;i<res3.size();i++)
        {
            res.push_back(res3[i]);
        }
      
        return res;
    }
};