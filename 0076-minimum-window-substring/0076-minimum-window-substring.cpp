class Solution {
public:
bool contains(map<char,int>&mps,map<char,int>&mpt){
   
      for(auto it : mpt){

            if(mps[it.first] < it.second)
                return false;
        }

        return true;
}
    string minWindow(string s, string t) {
        map<char,int>mps;
        map<char,int>mpt;
        for(int i=0;i<t.size();i++){
            mpt[t[i]]++;
        }
        int l=0,r=0,minl=1e5,st=-1;
        while(r<s.size()){
            mps[s[r]]++;
            while(contains(mps,mpt)){
                if(r-l+1<minl){
                minl=min(minl,r-l+1);
                st=l;
                }
                mps[s[l]]--;
                l++;
            }
            r++;
        }
       if(st==-1){
        return "";
       }
       return s.substr(st,minl);
    }
};