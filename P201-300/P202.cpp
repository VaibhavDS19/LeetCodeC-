class Solution {
public:
    bool isHappy(int n) {
        set<int> nums;
        int sum;
        do
        {
            nums.insert(n);
            sum=0;
            while(n>0)
            {
                sum += (n%10) * (n%10);
                n/=10;
            }
            n=sum;
        } while(nums.count(n)==0);
        return n==1;
    }
};