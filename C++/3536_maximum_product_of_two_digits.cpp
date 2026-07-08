class Solution {
public:
    int maxProduct(int n) {
        vector<int>r;
        while(n!=0)
        {
            int d=n%10;
            r.push_back(d);
            n=n/10;
        }
        sort(r.begin(),r.end());
        return r[r.size()-1]*r[r.size()-2];
    }
};
