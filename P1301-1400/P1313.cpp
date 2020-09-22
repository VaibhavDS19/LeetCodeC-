class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> x;
        int m, n;
        for(int i=0;i<nums.size();i++) {
            m=nums[i++];
            n=nums[i];
            for(int j=1;j<=m;j++) {
                x.push_back(n);
            }
        }
        return x;
    }
};