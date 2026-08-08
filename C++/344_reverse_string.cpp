class Solution {
public:
    void reverseString(vector<char>& s) {
                    int k=0;
            int l=s.size()-1;
        while(k<l)
        {
            char c=s[k];
            s[k]=s[l];
            s[l]=c;
            l--;
            k++;
        }
    }
};
