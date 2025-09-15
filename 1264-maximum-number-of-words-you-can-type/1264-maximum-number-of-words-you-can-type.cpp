class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        unordered_set<char>st(brokenLetters.begin(),brokenLetters.end());
        bool canType=true;
        int count=0;
        for(char c:text)
        {
            if(c==' ')
            {
                if(canType)
                {
                    count++;
                  
                }
                  canType=true;
            }
            else if(st.count(c))
            {
                canType=false;
            }
        }
           if (canType) {
            count++;
        }
        return count;
    }
};