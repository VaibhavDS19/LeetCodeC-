class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        int i, n=bits.size();
        for(i=0;i<n-1;i++)
        {
            if(bits[i]) i++;
        }
        return (i!=n);
    }
};