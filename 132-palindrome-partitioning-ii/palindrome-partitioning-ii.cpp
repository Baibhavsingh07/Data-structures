class Solution {
public:

vector<int>tbl;

    int ispalin(int i,int j,string &s){
        while(i<j) if(s[i++]!=s[j--]) return 0;

        return 1;
    }


    int f(int i,string &s){
        if(i==s.size()) return 0;

        int ans=INT_MAX;

        if(tbl[i]!=-1) return tbl[i];

        for(int j=i;j<s.size();j++){
            if(ispalin(i,j,s)){
                ans=min(ans,1+f(j+1,s));
            }
        }
        return tbl[i] = ans; 

    }

    int minCut(string s) {
        tbl.resize(s.size()+1,-1);
        return  f(0,s)-1;
    }
};