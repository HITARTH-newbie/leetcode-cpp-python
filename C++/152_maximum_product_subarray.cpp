class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int c=1;
        int sc=nums[0];
        for(int i=0;i<nums.size();i++)
        {
            c=1;
            for(int j=i;j<nums.size();j++)
            {
                c=c*nums[j];
                sc=max(sc,c);
            }
        }
        return sc;
    }
};
