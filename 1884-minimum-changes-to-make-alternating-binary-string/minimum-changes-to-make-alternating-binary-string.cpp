class Solution {
public:
    int minOperations(string s) {
        int i,j,k,c=0,x=0;

        for(i=0;i<s.size();i++){
            if(i%2==0 and s[i]=='0')
            c++;
            if(i%2==1 and s[i]=='1')
            c++;

            if(i%2==0 and s[i]=='1')
            x++;
            if(i%2==1 and s[i]=='0')
            x++;
        }

        cout<<c<<" "<<x;

        return min(c,x);
    }
};