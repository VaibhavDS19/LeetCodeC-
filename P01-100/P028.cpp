class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.size()==0) return 0;
        if(haystack.size()<needle.size()) return -1;
        int i, l;
        for(i=0;i<=haystack.size()-needle.size();i++)
        {
            for(l=0;l<needle.size();l++)
            {
                if(haystack[i+l]!=needle[l]) break;
            }
            if(l==needle.size()) return i;
        }
        return -1;
    }
};
