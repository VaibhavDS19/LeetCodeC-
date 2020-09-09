class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> curr;
        vector<int> answer;
        
        for (size_t i = 0; i < nums.size(); ++i)
        {
            int needed_num = target - nums[i];
            
            if (curr.find(needed_num) != curr.end())
            {
                answer.push_back(curr[needed_num]);
                answer.push_back(i);
                return answer;
            }
            else
            {
                curr.insert(make_pair(nums[i], i));
            }
        }
        return answer;
    }
};
