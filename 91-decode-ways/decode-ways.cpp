class Solution {
public:

vector<int>tbl;

    int f(int i,string &s){
        if(i>=s.size())
        return 1;

        if(s[i]=='0')
        return 0;

        if(tbl[i]==-1){
        int l=0,r=0;
        if(i<s.size()-1 and s[i]!='0' ){
            if(s[i]=='2' and s[i+1]<'7'){
                r = f(i+2,s);
            }else if(s[i]=='1' ){
                r = f(i+2,s);
            }
        }

        l = f(i+1,s);

        

        tbl[i] = l+r;

        }

        return tbl[i];
    }

    int numDecodings(string s) {
        tbl.resize(s.size(),-1);
        return f(0,s);
    }
};