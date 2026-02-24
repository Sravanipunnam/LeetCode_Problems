class Solution {
public:
    int scoreDifference(vector<int>& nums) {
        int active=true;
        int a=0,b=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2!=0 ){
                active=!active;
            }
            if((i+1)%6==0){
              active=!active;
            }
            if(active){
                a+=nums[i];
            }else{
                b+=nums[i];
            }
        }
        return a-b;
    }
};