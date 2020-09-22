class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> ans;
        long long int s,sq;
       long long int n=nums.size();
        s=(n*(n+1))/2;
        sq=((n)*(n+1)*(2*n+1))/6;
       long long int sum=0,sumof=0;
        for(int i=0; i<n; i++)
        {
            sum+=nums[i];
            sumof+=(nums[i]*nums[i]);
        }
        int d=s-sum;
        int ds=sq-sumof;
        int a=ds/d;
        ans.push_back((a-d)/2);
        ans.push_back((a+d)/2);
        return ans;
    }

}; 
static int x = []() {
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();