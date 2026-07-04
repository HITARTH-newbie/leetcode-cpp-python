class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool>r;
        int m=INT_MIN;
        for(int i:candies)
        m=max(m,i);
        for(int i:candies)
        {
            if(i+extraCandies>=m)
            r.push_back(true);
            else
            r.push_back(false);
        }
        return r;
    }
};
