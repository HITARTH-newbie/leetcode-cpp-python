class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int s=0;
        int i=nums.size()-1;
        while(i>=2)
        {
            if(nums[i-1]+nums[i-2]>nums[i])
            {
                s=nums[i]+nums[i-1]+nums[i-2];
                return s;
            }
            i--;
        }
        return 0;
    }
};
