class Solution {
public:
    int rangeBitwiseAnd(int l, int r) {
        long long  i=1,s=l;

        while(i<=l)
            i=i*2;

        if(i<r) return 0;

        for(i=l;i<=r;i++)
            s=s&i;

            return s;
    }
};