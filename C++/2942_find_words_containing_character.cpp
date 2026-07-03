class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int>r;
        int n=words.size();
        for(int i=0;i<n;i++)
        {
            if(words[i].find(x)!=npos)
            r.push_back(i);
        }
        return r;
    }
};
