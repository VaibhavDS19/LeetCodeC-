class Solution {
public:
    double average(vector<int>& salary) {
        double max=salary[0], min=max, sum=max, x;
        for(int i=1;i<salary.size();i++)
        {
            x=salary[i];
            sum+=x;
            if(x<min) min=x;
            else if(x>max) max=x;
        }
        return (sum-max-min)/(salary.size()-2);
    }
};