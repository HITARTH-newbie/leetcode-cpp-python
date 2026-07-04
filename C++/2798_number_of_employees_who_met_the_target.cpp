class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        int n=0;
        for(int x:hours)
        if(x>=target)
        n++;
        return n;
    }
};
