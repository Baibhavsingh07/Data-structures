class Solution {
public:
    int maxScore(string s) {
        int j,c=0;

        for(int i=1;i<s.size();i++){
            int zeroes=0,ones=0;
            for(j=0;j<i;j++)
            if(s[j]=='0')
            zeroes++;

            for(j=i;j<s.size();j++)
            if(s[j]=='1')
            ones++;

            c=max(c,ones+zeroes);
        }

        return c;
    }
};