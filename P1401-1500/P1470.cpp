class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> shuffled(2*n);
        for(int i=0;i<n;i++)
        {
            shuffled[i*2]=nums[i];
            shuffled[i*2+1]=nums[n+i];
        }
        return shuffled;
    }
};