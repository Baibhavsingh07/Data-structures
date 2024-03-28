class Solution {
public:
    int numberOfSubstrings(string s) {
        vector<int>a(3,-1);

        int c=0;

        for(int i=0;i<s.size();i++){
            a[s[i]-'a']=i;

            c = c+ min(a[0],min(a[1],a[2])) +1;
        }

        return c;

    }
};