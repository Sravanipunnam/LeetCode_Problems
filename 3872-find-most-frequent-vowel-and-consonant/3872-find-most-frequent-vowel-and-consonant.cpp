class Solution {
public:
    int maxFreqSum(string s) {
        map<char,int>vowel;
        map<char,int>consonant;
        for(char c:s)
        {
            if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
            {
                vowel[c]++;
            }
            else
            {
                consonant[c]++;
            }
        }
        int maxvowel=0;
        int maxconsonant=0;
        for(auto &it:vowel)
        {
            if(it.second>=maxvowel)
            {
                maxvowel=it.second;
            
            }
         
        }
         for(auto &itt:consonant)
        {
            if(itt.second>=maxconsonant)
            {
                maxconsonant=itt.second;
                  
            }
        }
       
        return maxvowel+maxconsonant;
    }
};