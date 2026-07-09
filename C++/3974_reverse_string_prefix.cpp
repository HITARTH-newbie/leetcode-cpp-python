class Solution {
public:
    string reversePrefix(string s, int k) {
        string r="";
        int x=k;
        while(x!=0)
        {
            r+=s[x-1];
            x--;
        }
        for(int i=k;i<s.length();i++)
        r+=s[i];
        return r;
    }
};
