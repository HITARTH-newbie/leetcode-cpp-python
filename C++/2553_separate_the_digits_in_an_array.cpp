class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> r;
        for(int x : nums) 
        {
            string s = to_string(x);
            for(char c : s)
            {
                r.push_back(c - '0');
            }
        }
        return r;
    }
};
