class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        int n=nums.size();
        long long sum=0;

        for(int i=0;i<n-1;i++)
        {
            int minimum=nums[i];
            int maximum=nums[i];
            for(int j=i+1;j<n;j++)
            {
                if(nums[j]>maximum)
                    maximum=nums[j];
                else if(nums[j]<minimum)
                    minimum=nums[j];
                sum+=(long long)maximum-minimum;
            }
        }

        return sum;
    }
};
