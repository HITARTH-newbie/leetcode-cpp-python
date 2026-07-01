class Solution {
public:
    int minAbsoluteDifference(vector<int>& nums) {
        int x=-1;
        int y=-1;
        int d=INT_MAX;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==1)
            x=i;
            if(nums[i]==2)
            y=i;
            if(x!=-1 && y!=-1)
             d=min(d,abs(x-y));
        }
        if(x!=-1 && y!=-1)
        return d;
        else
        return -1;
    }
};
