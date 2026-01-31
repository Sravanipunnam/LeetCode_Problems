class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
       map<char,int>mpp;
       for(int i=0;i<letters.size();i++){
        mpp[letters[i]]++;
       }
       char ans=letters[0];
       for(auto &it:mpp){
        if(it.first>target){
            ans=it.first;
            break;
        }
       }
       return ans;
    }
};