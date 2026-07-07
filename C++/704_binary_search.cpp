class Solution {
public:
    int search(vector<int>& nums, int target) {
        int lo=0;
        int high=nums.size()-1;
        int mid=(lo+high)/2;
        while(lo<=high)
        {
            if(nums[mid]==target)
            return mid;
            if(nums[mid]<target)
            {
                lo=mid+1;
            }
            else
            high=mid-1;
            mid=(lo+high)/2;
        }
        return -1;
    }
};
