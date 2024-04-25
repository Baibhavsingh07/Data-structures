class Solution {
public:

vector<vector<int>>tbl;

    int f(int i,char p,string &s,int k){
        if(i==s.size()) return 0;

        if(tbl[i][p+1-'a']!=-1) return tbl[i][p+1-'a'];

        int l = f(i+1,p,s,k);
        int r=0;

        if(p==char(96) or abs(s[i]-p)<=k)
        r = 1 + f(i+1,s[i],s,k);

        return tbl[i][p+1-'a']= max(l,r);
    }

    int longestIdealString(string s, int k) {
        tbl.resize(s.size(),vector<int>(27,-1));
        return f(0,char(96),s,k);
    }
};