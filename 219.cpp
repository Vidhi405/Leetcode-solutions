class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> arr;

        for(int i=0;i<nums.size();i++)
        {
            int x=nums[i];

            if(arr.count(x) && i-arr[x]<=k)
                return true;
            
            arr[x]=i;
        }

        return false;
    }
};
