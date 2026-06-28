class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int lar=0;
        int c=0;
        int k=0;
        for(int  i=0;i<nums.size();i++)
        if(nums[i]>lar)
        {
            lar=nums[i];
            k=i;
        }
        for(int  i=0;i<nums.size();i++)
        if(nums[i]*2<=lar)
        c++;
        if(c==nums.size()-1)
        return k;
        else
        return -1;    
    }
};
