class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int i=0, cur, profit=0;
        for(i=0;i<n-1;i++)
        {
           while(i<n-1 && prices[i]>prices[i+1]) i++;
            if(i==n-1) break;
            cur = prices[i];
            while(i<n-1 && prices[i]<prices[i+1]) i++;
            if(i==n) break;
            profit+=prices[i]-cur;
        }
        return profit;
    }
};
