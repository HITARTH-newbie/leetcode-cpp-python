class Solution {
public:
    bool isPalindrome(int x) {
        bool sig=true;
        long c=0;
        int k=x;
        while(k!=0)
        {
            if(k<0)
            sig=false;
            int d=k%10;
            c=c*10+d;
            k=k/10;
        }
        if(c!=x)
        sig=false;
        return sig;
    }
};
