class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        vector<int>res(nums.size());
        int k=0;
        int j=1;
        int i=0;
        while(i<nums.size())
        {
            if(nums[i]%2==0)
            {
                res[k]=nums[i];
                k=k+2;
                i++;
            }
            else
            {
                res[j]=nums[i];
                j=j+2;
                i++;
            }
        } 
        return res;
    }
};
