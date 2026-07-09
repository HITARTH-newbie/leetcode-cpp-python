class Solution {
public:
    int reverseDegree(string s) {
        int r = 0;
        for (int i = 0; i < s.length(); i++) 
        {
            int value='z' - s[i] + 1;
            int position=i + 1;
            r+=value*position;
        }
        return r;
    }
};
