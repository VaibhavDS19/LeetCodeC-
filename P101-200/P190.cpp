class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t ret=0;
        for(int i=1;i<=32;i++) {
            ret = ret*2 + (n&1);
            n=n>>1;
        }
        return ret;
    }
};