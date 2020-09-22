class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        int n = deck.size();
        int x[10000]={0};
        for(auto i:deck)
            x[i]++;
        
        int min = x[0];
        for(auto i:x)
        {
            if(i>0)
                min=gcd(min, i);
        }
        
        if(min==1) return false;
        
        for(int i=0;i<=9999;i++)
        {
            if(x[i]%min>0)
                return false;
        }
        
        return true;
    }
};
