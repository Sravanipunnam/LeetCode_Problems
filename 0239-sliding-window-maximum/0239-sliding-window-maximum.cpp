class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
    deque<long long >dq;
    long long mini=0,j=0;
    vector<int>ans;
    for(int i=0;i<nums.size();i++){
        while(!dq.empty() && dq.back()<nums[i]){
            dq.pop_back();
        }
        dq.push_back(nums[i]);
        if(i-j+1==k){
            ans.push_back(dq.front());
            if(dq.front()==nums[j]){
                dq.pop_front();
            }
            j++;
 
        }
    }
    return ans;
    }
};