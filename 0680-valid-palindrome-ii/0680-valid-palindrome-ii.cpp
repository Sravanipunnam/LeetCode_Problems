class Solution {
public:
bool ispalin(int l,int r,string s){
      while(l<=r){
        if(s[l]!=s[r]){
            return false;
        }
        l++;
        r--;
    }
    return true;
}
    bool validPalindrome(string s) {
       int r=s.size()-1;
       int l=0;
       while(l<=r){
        if(s[l]!=s[r]){
         if( ispalin(l+1,r,s)|| ispalin(l,r-1,s)){
            return true;
         }
         else{
            return false;
         }
        }
        l++;
        r--;
       } 
       return true;
    }
};