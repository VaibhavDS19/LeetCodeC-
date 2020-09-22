class Solution 
{
public:
    vector<int> sumZero(int n) 
    {
        vector<int> a(n);
        for(int i=0; i<n; i++)
        {
            a[i] = 2*i -n +1;
        }
        return a;
    }
};