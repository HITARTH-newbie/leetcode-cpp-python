class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int c=0;
     for(int i=0;i<nums.size();i++)
     {
        int cur=nums[i];
        for(int j=i+1;j<nums.size();j++)
        if(cur==nums[j])
        c++;
     }   
     return c;
    }
};
