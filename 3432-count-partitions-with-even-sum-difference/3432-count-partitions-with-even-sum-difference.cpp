class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int totalsum=0;
        for(int i=0;i<nums.size();i++)
        {
            totalsum+=nums[i];
        }
        int count=0;
        for(int i=0;i<nums.size()-1;i++)
        {
            if((nums[i]-(totalsum-nums[i]))%2==0){
                count++;
            }
        }
        return count;
    }
};