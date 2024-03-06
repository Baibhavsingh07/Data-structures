class Solution {
public:

vector<int>tbl;
vector<vector<int>>pal;

    int ispalin(int i,int j,string &s){
        while(i<j) if(s[i++]!=s[j--]) return 0;

        return 1;
    }


    int f(int i,string &s){
        if(i==s.size()) return 0;
        
        int ans=INT_MAX;

        if(tbl[i]!=-1) return tbl[i];

        for(int j=i;j<s.size();j++){
            if(pal[i][j]!=-1){
                if(pal[i][j]){
                    ans=min(ans,1+f(j+1,s));
                }
                
            }
            else if(ispalin(i,j,s)){
                pal[i][j]=1;
                ans=min(ans,1+f(j+1,s));
            }else {
                pal[i][j]=0;
            }
        }
        return tbl[i] = ans; 

    }

    int minCut(string s) {
        tbl.resize(s.size()+1,-1);
        pal.resize(s.size()+1,vector<int>(s.size()+1,-1));
        return  f(0,s)-1;
    }
};