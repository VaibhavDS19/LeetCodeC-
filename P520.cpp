class Solution {
public:
    bool detectCapitalUse(string word) {
        bool x=islower(word[0]);
        if(!x) x=islower(word[1]);
        auto y=x;
        for(int i=1;i<word.length();i++)
        {
            y=islower(word[i]);
            if(x^y) return false;
        }
        return true;
    }
};
