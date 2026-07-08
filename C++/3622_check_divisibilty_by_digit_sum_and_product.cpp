class Solution {
public:
    bool checkDivisibility(int n) {
        int s=0;
        int k=n;
        int p=1;
        while(k!=0)
        {
            s+=k%10;
            p=p*(k%10);
            k=k/10;
        }
        if(n%(s+p)==0)
        return true;
        else
        return false;
    }
};
