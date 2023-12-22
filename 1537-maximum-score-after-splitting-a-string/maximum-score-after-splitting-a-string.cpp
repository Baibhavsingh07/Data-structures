class Solution {
public:
    int maxScore(string s) {
        int i,j,c=0,ones=0,z=0;

        for(i=1;i<s.size();i++){
            z=0;
            ones=0;
            for(j=0;j<i;j++)
            if(s[j]=='0')
            z++;

            for(j=i;j<s.size();j++)
            if(s[j]=='1')
            ones++;

            c=max(c,ones+z);
        }

        return c;
    }
};