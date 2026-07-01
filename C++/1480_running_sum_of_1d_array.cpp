class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int>r;
        int s=0;
        for(int i=0;i<nums.size();i++)
        {
            s+=nums[i];
            r.push_back(s);
        }
        return r;
    }
};
