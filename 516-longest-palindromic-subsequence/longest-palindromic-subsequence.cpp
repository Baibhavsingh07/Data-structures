class Solution {
public:

vector<vector<int>>tbl;

    int f(int i,int j,string &a){
        if(i>j) return 0;
        if(i==j) return 1;

        if(i>=a.size() or j<0) return 0;

        if(tbl[i][j]!=-1) return tbl[i][j];

        int l=0,r=0,m=0;
        if(a[i]==a[j])
        l=2+f(i+1,j-1,a);
        else{
        r = f(i+1,j,a);
        m = f(i,j-1,a);
        }

        return tbl[i][j] = max(l,max(r,m));
    }

    int longestPalindromeSubseq(string s) {
        tbl.resize(s.size()+1,vector<int>(s.size()+1,-1));
        return f(0,s.size()-1,s);
    }
};