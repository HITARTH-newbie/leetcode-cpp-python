class Solution {
public:
    int findSpecialInteger(vector<int>& nums) {
        int n=nums.size()/4;
        int k=0;
        for(int i=0;i<nums.size();i++)
        {
            int a=nums[i];
            int f=0;
            for(int j=0;j<nums.size();j++)
            if(nums[i]==nums[j])
            f++;
            if(f>n)
            k=a;
        }
        return k;
    }
};
