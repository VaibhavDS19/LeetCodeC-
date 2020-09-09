class Solution {
public:
    int climbStairs(int n) {
        if(n<4) return n;
        int f1=2, f2=3;
        int i=3;
        while(i<n)
        {
            f1=f1+f2;
            i++;
            if(i==n) return f1;
            f2=f1+f2;
            i++;
        }
        return f2;
    }
};
