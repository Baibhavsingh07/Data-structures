class Solution {
public:
    int maxScore(string s) {
        int i,j,c=0,ones=0,z=0;

        z = s[0]=='0'?1:0;

        for(i=1;i<s.size();i++)
        if(s[i]=='1')
        ones++;

        for(i=1;i<s.size();i++){
            c=max(c,ones+z);

            if(s[i]=='0')
                z++;
            if(s[i]=='1')
            ones--;

        }

        return c;
    }
};