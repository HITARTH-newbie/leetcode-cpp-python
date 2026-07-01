class Solution {
public:
    double average(vector<int>& salary) {
        sort(salary.begin(),salary.end());
        double s=0;
        int n=salary.size();
        for(int i=1;i<n-1;i++)
        s+=salary[i];
        cout<<s;
        s=s/(n-2);
        return s;
    }
};
