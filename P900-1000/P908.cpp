class Solution {
public:
    int smallestRangeI(vector<int>& A, int K) {
        int min=A[0], max=min;
        for(int i:A) {
            if(i>max) max=i;
            if(i<min) min=i;
        }
        return (max-min)<(2*K)?0:max-min-(K<<1);
    }
};