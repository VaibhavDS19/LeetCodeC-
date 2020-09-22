class Solution {
public:
    int balancedStringSplit(string s) {
        int x=0, count=0;
        for(auto ch:s)
        {
            if(ch=='L') x--;
            else x++;
            if(x==0) count++;
        }
        return count;
    }
};