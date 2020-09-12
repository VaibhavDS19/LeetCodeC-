class Solution {
public:
    bool judgeSquareSum(int c) {
        long top = sqrt(c);
        long bot = 0, det = 0;
        while(bot <= top) {
            det = top*top + bot*bot;
            if(det == c) {
                return true;
            }
            else if(det < c) {
                bot++;
            }
            else if(det > c) {
                top--;
            }
        }
        return false;
    }
};