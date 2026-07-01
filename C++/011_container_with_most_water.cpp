class Solution {
public:
    int maxArea(vector<int>& height) {
        int area=0;
        int n=height.size();
        int ma=INT_MIN;
        int left=0;
        int right=n-1;
        while(left<right)
        {
            area=min(height[right],height[left])*(right-left);
            if(height[left]<height[right])
            left++;
            else
            right--;
            ma=max(ma,area);
        }
        return ma;
    }
};
