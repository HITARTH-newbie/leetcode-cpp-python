class Solution {
public:
    int strStr(string haystack, string needle) {
        int l=-1;
        if(haystack.find(needle)!=string::npos)
        {
            l=haystack.find(needle);
        }
        return l;
    }
};
