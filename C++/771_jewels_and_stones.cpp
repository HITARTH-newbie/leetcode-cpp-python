class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int i=0;
        int l=0;
        while(i<stones.length())
        {
            char c=stones[i];
            if(jewels.find(c)!=string::npos)
            l++;
            i++;
        }
        return l;
    }
};
