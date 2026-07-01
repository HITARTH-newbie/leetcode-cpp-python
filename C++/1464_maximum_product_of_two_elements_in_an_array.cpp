class Solution {
public:
    int maxProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int l=nums.size()-1;
        int sl=nums.size()-2;
        int p=(nums[l]-1)*(nums[sl]-1);
        return p;
    }
};
