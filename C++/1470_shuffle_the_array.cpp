class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int>p1;
        vector<int>p2;
        vector<int>r;
        for(int i=0;i<n;i++)
        p1.push_back(nums[i]);
        for(int i=n;i<nums.size();i++)
        p2.push_back(nums[i]);
        for(int i=0;i<n;i++)
        {
            r.push_back(p1[i]);
            r.push_back(p2[i]);
        }
        return r;
    }
};
