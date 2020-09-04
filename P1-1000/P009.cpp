class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        if(x<10) return true;
        int rev=0, n=ceil(log10(x));
        for(int i=1;i<=n/2;i++)
        {
            rev = rev*10 + x%10;
            x = x/10;
        }
        if(n&1) rev = rev*10 + x%10;
        return(x==rev);
    }
};
