class Solution { //memset style, 20ms
public:
    bool containsDuplicate(vector<int>& nums)
    {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        if(nums.size()<=1)
            return 0;

        int minn = *min_element(nums.begin(),nums.end());
        int maxx = *max_element(nums.begin(),nums.end());
        
        int arr[maxx-minn+1];
        memset(arr,0,sizeof(arr));
        for(int i=0;i<nums.size();i++)
        {
            
            arr[nums[i]-minn]++;
            
            if(arr[nums[i]-minn]>1)
            {
                return 1;
            }
        }
        return 0;
    }
};