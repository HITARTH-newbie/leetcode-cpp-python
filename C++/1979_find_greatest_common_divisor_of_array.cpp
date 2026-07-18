class Solution {
public:
    int findGCD(vector<int>& nums) {
        int M=INT_MIN;
        int m=INT_MAX;
        for(int x:nums)
        {
            if(x>M)
            M=max(x,M);
            if(x<m)
            m=min(x,m);
        }
        return gcd(m,M);
    }
};
