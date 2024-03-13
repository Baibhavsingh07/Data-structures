class Solution {
public:
    int pivotInteger(int n) {
        int i,j,c=0,s=0;
        for(i=1;i<=n;i++)s+=i;

        for(i=1;i<=n;i++){
            if(2*c==s-i) return i;

            c+=i;
        }

        return -1;
    }
};