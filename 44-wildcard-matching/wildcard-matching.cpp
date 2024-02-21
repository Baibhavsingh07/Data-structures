class Solution {
public:

vector<vector<int>>tbl;

    bool f(int i,int j,string &s, string &p){
        if(i==s.size() and j==p.size()) return 1;
        
        if(i==s.size() and j!=p.size() and p[j]!='*' ) return 0;
        if(j==p.size()) return 0;

        if(tbl[i][j]!=-1) return tbl[i][j];


        // if(tbl.find({i,j})!=tbl.end()) return tbl[{i,j}];
        if(i==s.size() and p[j]=='*') return f(i,j+1,s,p);


        int l=0,r=0,q=0;
        if(s[i]==p[j] or p[j]=='?')
        l = f(i+1,j+1,s,p);
        else if(p[j]=='*'){
            r = f(i+1,j,s,p);
            q = f(i+1,j+1,s,p) or f(i,j+1,s,p);
        }

        return tbl[i][j] =  l or q or r;
    }

    bool isMatch(string s, string p) {
        tbl.resize(s.size()+1,vector<int>(p.size()+1,-1));
        return f(0,0,s,p);
    }
};