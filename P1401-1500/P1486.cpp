class Solution {
public:
    int xorOperation(int n, int start) {
        int num = start, i=0;
        for(i=1;i<n;i++)
        {
            start = start + 2;
            num = num^start;
        }
        return num;
    }
};
