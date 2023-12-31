class Solution {
public:

vector<int>tbl;

    int f(int i,string s, vector<string>& w){
        if(i==s.size())return 1;

        int ans=0;

        if(tbl[i]!=-1)
        return tbl[i];

        for(auto x:w){
            int c=0;
            int k=i;
            for(int j=0;j<x.size();j++){
                if(x[j]!=s[k++]){
                    c=1;
                    break;
                }
            }
            if(c==0){
                
                ans+=f(i+x.size(),s,w);
            }
        }

        tbl[i] = ans;
        return tbl[i];
    }

    bool wordBreak(string s, vector<string>& w) {
        
        tbl.resize(s.size(),-1);
        return f(0,s,w);
    }
};