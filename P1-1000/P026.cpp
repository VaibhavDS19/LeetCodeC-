class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()==0) return 0;
        int cur=1, temp=nums[0], i=1;
        while(i<nums.size())
        {
            while(i<nums.size() && nums[i]==temp) i++;
            if(i<nums.size())
            {
                nums[cur] = nums[i];
                temp = nums[i];
                cur++;
                i++;
            }
        }
        return cur;
    }
};
