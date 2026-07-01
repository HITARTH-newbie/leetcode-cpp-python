class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int left=0;
        vector<int>r;
        int right=nums.size()-1;
        while(left<right)
        {
           int sum=nums[left]+nums[right];
           if(sum==target)
           {
            r.push_back(left+1);
            r.push_back(right+1);
           }
           if(sum<target)
           left++;
           else
           right--;
        }
        return r;
    }
};
