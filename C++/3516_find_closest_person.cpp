class Solution {
public:
    int findClosest(int x, int y, int z) {
        int d1=abs(z-x);
        int d2=abs(z-y);
        int k=0;
        if(d1==d2)
        k=0;
        else
        if(d1<d2)
        k=1;
        else
        k=2;
        return k;
    }
};
