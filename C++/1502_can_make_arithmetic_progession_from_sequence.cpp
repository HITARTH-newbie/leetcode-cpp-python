class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        int d=0;
        int d1=0;
        bool sig=true;
        sort(arr.begin(),arr.end());
        for(int i=2;i<arr.size();i++)
        {
            d=arr[i-1]-arr[i];
            d1=arr[i-2]-arr[i-1];
            if(abs(d)!=abs(d1))
            sig=false;
        }
        return sig;
    }
};
