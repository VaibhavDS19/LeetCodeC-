class Solution {
public:
    bool isPowerOfTwo(long n) {
        long pows=1;
        while(pows<n) pows=pows<<1;
        return pows==n;
    }
};