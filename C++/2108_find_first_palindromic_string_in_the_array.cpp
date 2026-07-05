class Solution {
public:
    string firstPalindrome(vector<string>& words) {
       string k="";
        for(string x:words)
        {string r="";
            for(int i=x.length()-1;i>=0;i--)
            r+=x[i];
            if(r==x)
           {
            k=x;
              break;
           }
        }
        return k;
    }
};
