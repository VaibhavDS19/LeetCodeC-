class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string shuffled=s;
        int j=0;
        for(int i:indices) shuffled[i]=s[j++];
        return shuffled;
    }
};