class Solution {
public:
    int reverse(int x) {
        int mul = 1, val=0, i;
        if(x<0) mul =  -1;
        if(x==INT_MIN || x==0) return 0;
        x=abs(x);
        int logs = ceil( log10(x) );
        for(i=0;i<=logs-1;i++)
        {
            if(i==9)
            {
                if(val>214748364) return 0;
                if(val==214748364 && x==7+(mul==0)) return 0;
            }
            val = val*10 + x%10;
            x=x/10;
        }
        return mul*(val + x);
    }
};
