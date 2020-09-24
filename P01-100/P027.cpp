class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int size = nums.size(), count=0;
        for(int i:nums) if(i==val) count++;
        int i, last = size-1;
        for(i=0;i<size-count;i++)
        {
            while(nums[last]==val) last--;
            if(last>i && nums[i]==val) {
                nums[i] = nums[last];
                nums[last]=val;
            }
        }
        return i;
    }
};