class Solution {
public:
    int reverse(int x) {
        long c = 0;
        while(x != 0) {
            int d = x % 10;
            c = c * 10 + d;
            x = x / 10;
        }
        if(c > INT_MAX || c < INT_MIN) 
        return 0;
        return (int)c;
    }
};
