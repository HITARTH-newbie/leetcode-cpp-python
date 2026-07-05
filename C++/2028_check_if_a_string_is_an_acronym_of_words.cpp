class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        string k="";
        for(string x:words)
        {
            k+=x[0];
        }
        if(k==s)
        return true;
        else
        return false;
    }
};
