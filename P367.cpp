class Solution {
public:
    bool isPerfectSquare(unsigned long num) {
        unsigned long x=num%10;
        if(x==2 || x==3 || x==7 || x==8) return false;
        string s=to_string(num);
        unsigned long size=s.size()/2 + s.size()%2;
        x=1;
        while(size>0)
        {
            x*=10;
            size--;
        }
        for(size=x/10;size<=x*10;size++)
        {
            if(size*size==num) return true;
        }
        return false;
    }
};