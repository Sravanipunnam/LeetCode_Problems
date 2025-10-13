class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
       vector<string>ans;
       ans.push_back(words[0]);
       for(int i=1;i<words.size();i++)
       {
          string prev=ans.back();
          string curr=words[i];
          string s1=curr;
          sort(prev.begin(),prev.end());
          sort(curr.begin(),curr.end());
          if(prev!=curr)
          {
            ans.push_back(s1);
          }
       } 
       return ans;
    }
};