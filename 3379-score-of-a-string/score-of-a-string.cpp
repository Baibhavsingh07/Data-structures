class Solution {
public:
    int scoreOfString(string s) {
        int c=0,i;
        for(i=1;i<s.size();i++)
        c+=abs(s[i]-s[i-1]);
        return c;
    }
};