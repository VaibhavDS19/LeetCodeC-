class Solution {
public:
    long missingNumber(vector<int>& nums) {
        long sum=0, j=0;
        for(int i:nums) { sum+=i; j++; }
        return j*(j+1)/2-sum;
    }
};