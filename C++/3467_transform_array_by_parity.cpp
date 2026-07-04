class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        vector<int>r;
        for(int i:nums)
        if(i%2==0)
        r.push_back(0);
        else
        r.push_back(1);
        sort(r.begin(),r.end());
        return r;
    }
};
