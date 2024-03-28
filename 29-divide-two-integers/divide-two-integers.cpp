class Solution {
public:
    int divide(int a, int b) {
        auto c = (long)a/b;
        if(c>2147483647 ) return 2147483647;
        if(c<-2147483648 ) return -2147483648;

        return c;
    }
};