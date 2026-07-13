class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
     string s="123456789";
     vector<int>res;
     for(int i=1;i<10;i++)
     {
        int l=9-i;
        for(int j=0;j<=l;j++)
        {
            string r=s.substr(j,i);
            int n=stoi(r);
            if(n>=low && n<=high)
            res.push_back(n);
        }
     } 
     return res;  
    }
};
