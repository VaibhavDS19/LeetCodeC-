class Solution {
public:
    int myAtoi(string str) {
        int i=0, val1=0, val2=0, mul=1;
        while(str[i]==' ') i++;
        
        if( str[i] == '-' )
        {
            mul=-1;
            i++;
        }
        else if(str[i]=='+')
        {
            mul=1;
            i++;
        }
        while(str[i]=='0') i++;
        int x=i, count=0;
        while(str[i]>='0' && str[i]<='9')
        {
            count++;
            if(count<=5) val1 = val1*10 + str[i]-'0';
            else if(count<=10) val2=val2*10 + str[i]-'0';
            i++;
        }
        
        if(count>10)
        {
            if(mul==1) return INT_MAX;
            else return INT_MIN;
        }
        
        if(count==10)
        {
            if(val1>21474)
            {
                if(mul==1) return INT_MAX;
                if(mul==-1) return INT_MIN;
            }
            if(val1==21474)
            {
                if(mul==1 && val2>=83647) return INT_MAX;
                if(mul==-1 && val2>=83648) return INT_MIN;
            }
        }
        for(i=0;i<count-5;i++) val1*=10;
        
        
        
        return (val1+val2)*mul;
    }
};
