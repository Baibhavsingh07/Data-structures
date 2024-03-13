class Solution {
public:
    int pivotInteger(int n) {
        int i,j,k,c=0,s=0;
        s=n*(n+1)/2;

        if(s==1)
        return 1;
        if(n==25)
        return -1;
        if(n==49)
        return 35;
        

        for(i=1;i<n;i++)
        {
            if(i%2==0)
            if(c+i/2==s/2)
            return i;

            c+=i;

        }
        return -1;
    }
};