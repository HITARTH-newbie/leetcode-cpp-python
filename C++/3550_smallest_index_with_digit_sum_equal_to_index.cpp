class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        for(int i=0;i<nums.size();i++)
        {
            int s=0;
            int num=nums[i]; 
            while(num!=0)
            {
                s+=num%10;
                num=num/10;
            }
            if(i==s)
                return i;   
        }
        return -1;
    }
};
