class Solution {
public:
    int minElement(vector<int>& nums) {
        int m=INT_MAX;
        for(int i:nums)
        {
            int d=0;
            int s=0;
            while(i!=0)
            {
                d=i%10;
                s=s+d;
                i=i/10;
            }
            m=min(m,s);
        }
        return m;
    }
};
