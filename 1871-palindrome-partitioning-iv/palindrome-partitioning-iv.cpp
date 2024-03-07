class Solution {
public:

vector<vector<int>>tbl;

    int ispal(int i,int j,string &s){
        while(i<j){
            if(s[i++]!=s[j--]) return 0;
        }
        return 1;
    }


    int f(int i,string &s,int k){
        if(i==s.size() and k==0) return 1; 
        if(i==s.size() ) return 0; 
        if(k<=0 ) return 0; 

        if(tbl[i][k]!=-1) return tbl[i][k];

        int ans =0;

        for(int j=i;j<s.size();j++){
            if(ispal(i,j,s)){
                ans=ans or f(j+1,s,k-1);
            }
        }
        return tbl[i][k]=  ans;

    }


    bool checkPartitioning(string s) {
        tbl.resize(s.size()+1,vector<int>(4,-1));
        return f(0,s,3);
    }
};