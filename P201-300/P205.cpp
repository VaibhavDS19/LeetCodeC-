class Solution {
public:
   bool isIsomorphic(string s, string t) {
        vector<char> A(95,' '),B(95,' ');
        for(int i=0;i<s.length();++i)
        {
            if(A[s[i]-' ']==' ' && B[t[i]-' ']==' ')
            {
                A[s[i]-' '] = t[i];
                B[t[i]-' '] = s[i];                
            }
            else if(A[s[i]-' ']!=t[i] && B[t[i]-' ']!=s[i])
                return false;    
        }
        return true;
    }
};