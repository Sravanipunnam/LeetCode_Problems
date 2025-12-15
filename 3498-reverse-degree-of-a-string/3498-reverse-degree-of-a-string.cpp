class Solution {
public:
    int reverseDegree(string s) {
     map<char,int>mp;
     int idx=26;
     for(char i='a';i<='z';i++){
        mp[i]=idx--;
     }
     int sum=0;
   for(int i=0;i<s.size();i++){
    if(mp.find(s[i])!=mp.end()){
        sum+=(i+1)*mp[s[i]];
    }
   }
   return sum;
        
    }
};