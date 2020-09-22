class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& A, vector<vector<int>>& queries) {
        int sum=0, n, j;
        vector<int> sums;
        for(int i:A)
            if( (i&1)==0 )
                sum+=i;
        for(vector<int> i:queries)
        {
            n=i[0];
            j=i[1];
            if(n&1) {
                if(A[j]&1) sum+=(A[j]+n);
                else sum-=A[j];
            }
            else {
                if( (A[j]&1)==0 ) sum+=n;
            }
            A[j] += n;
            sums.push_back(sum);
        }
        return sums;
    }
};