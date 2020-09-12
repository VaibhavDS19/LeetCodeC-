class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> rets;
        int max=candies[0];
        for(int i:candies) if(i>max) max=i;
        for(int i:candies) rets.push_back(i+extraCandies>=max);
        return rets;
    }
};