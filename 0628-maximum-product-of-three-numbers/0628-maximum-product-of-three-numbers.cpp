class Solution {
public:
    int maximumProduct(vector<int>& nums) {
     int n=nums.size();
     int max1=-1000,max2=-1000,max3=-1000;
     int min1=0,min2=0;
     for(int i=0;i<nums.size();i++){
        if(nums[i]>=max1){
             max3=max2;
              max2=max1;
            max1=nums[i];
            
        }
        else if(nums[i]>=max2){
             max3=max2;
            max2=nums[i];
            
        }
        else if( nums[i]>=max3) {
            max3=nums[i];
        }
        if(nums[i]<=min1){
             min2=min1;
           min1=nums[i];
          
        }else if(nums[i]<=min2){
            min2=nums[i];
        }
    }
     return max(max1*max2*max3,min1*min2*max1);
    }
};