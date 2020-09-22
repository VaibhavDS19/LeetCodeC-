class Solution {
public:
    string toHex(long num) {
        string nums="0123456789abcdef", hex="";
        if(num==0) return "0";
        if(num<0) num=0xffffffff+num+1;
        while(num>0)
        {
            hex += nums[num%16];
            num/=16;
        }
        reverse(hex.begin(), hex.end());
        return hex;
    }
};