class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> sol;
        
        if(numRows==0) return sol;
        
        vector<int> x;
        x.push_back(1);
        sol.push_back(x);
        if(numRows>=2)
        {  
            x.push_back(1);
            sol.push_back(x);
        }
        for(int i=3;i<=numRows;i++)
        {
            vector<int> y(i,1);
            for(int j=1;j<=i/2;j++)
            {
                y[j]=sol[i-2][j-1]+sol[i-2][j];
                y[i-j-1]=y[j];
            }
            sol.push_back(y);
        }
        return sol;
    }
};