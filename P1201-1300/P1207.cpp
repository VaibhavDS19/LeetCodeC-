class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int x[2001]={0};
        set<int> y;
        for(int i:arr) x[i+1000]++;
        for(int i:x)
        {
            if(i!=0 && y.count(i))  return false;
            y.insert(i);
        }
        return true;
    }
};