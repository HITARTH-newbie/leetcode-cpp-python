class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
    int s=0;
    int ds=0;
    for(int x:nums)
    {
        if(x>=10)
        ds+=x;
        else
        s+=x;
    }
    if(s!=ds)
    return true;
    else
    return false; 
    }
};
