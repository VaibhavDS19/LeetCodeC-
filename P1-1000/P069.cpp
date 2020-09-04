class Solution {
public:
    int mySqrt(int x) {
        return int(pow(10,log10(x)/2));
    }
};
