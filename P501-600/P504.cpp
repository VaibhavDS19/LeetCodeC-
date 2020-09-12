class Solution {
public:
    string convertToBase7(int num) {
        if(num==0)  return "0";
        int mul=1;
        if(num<0) mul=-1;
        num*=mul;
        string s="";
        do
        {
            s=to_string(num%7)+s;
            num/=7;
        }while(num>0);
        if(mul==-1)
            s = "-" + s;
        return s;
    }
};