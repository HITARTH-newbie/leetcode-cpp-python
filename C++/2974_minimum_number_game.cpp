class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>r(nums.size());
        for(int i=1;i<nums.size();i=i+2)
       {
         r[i-1]=nums[i];
         r[i]=nums[i-1];
       }
       return r;
    }
};
