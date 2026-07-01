class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int l=1;
        int ml=1;
        for(int i=1;i<nums.size();i++)
        if(nums[i-1]<nums[i])
        {
            l++;
            ml=max(ml,l);
        }
        else
        l=1;
        return ml;
    }
};
