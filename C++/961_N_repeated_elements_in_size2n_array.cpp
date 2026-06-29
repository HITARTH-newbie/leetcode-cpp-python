class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int k=0;
        for(int i=0;i<nums.size();i++)
        {
            int c=0;
            for(int j=i;j<nums.size();j++)
            if(nums[i]==nums[j])
            c++;
            if(c==nums.size()/2)
            k=nums[i];
        }
        return k;
    }
};
