class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string r="";
        string r1="";
        for(string x:word1)
        r+=x;
        for(string x:word2)
        r1+=x;
        if(r==r1)
        return true;
        else
        return false;
    }
};
