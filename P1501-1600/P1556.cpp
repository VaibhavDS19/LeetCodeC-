class Solution {
public:
    string thousandSeparator(int n) {
        if(n==0) return "0";
        int i=1;
        string s="";
        while(n>0)
        {
            s = to_string(n%10) + s;
            n/=10;
            if(i%3==0 && n>0)  s = "."+s;
            i++;
        }
        return s;
    }
};