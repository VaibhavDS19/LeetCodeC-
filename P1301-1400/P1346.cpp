class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        set<int> x;
        for(int i:arr)
        {
            if(i%2==0)
            {
                if(x.count(i/2)) return true;
            }
            if(x.count(i*2)) return true;
            x.insert(i);
        }
        return false;
    }
};