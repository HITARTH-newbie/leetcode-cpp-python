class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        vector<double>a;
        sort(nums.begin(),nums.end());
        int left=0;
        int right=nums.size()-1;
        while(left<=right)
        {
            a.push_back((nums[left]+nums[right])/2.0);
            left++;
            right--;
        }
        double m=DBL_MAX;
        for(double x:a)
        m=min(m,x);
        return m;
    }
};
