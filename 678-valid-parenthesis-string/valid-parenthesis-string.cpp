class Solution {
public:

vector<vector<int>>tbl;

    int f(int i,string s,int bal){
        if(i==s.size() and bal==0) return 1;
        if(i==s.size()) return 0;

        if(bal<0) return 0; 

        if(tbl[i][s.size()+bal]!=-1) return tbl[i][s.size()+bal];

        if(s[i]=='(') return tbl[i][s.size()+bal] = f(i+1,s,bal+1);
        if(s[i]==')') return tbl[i][s.size()+bal] = f(i+1,s,bal-1);
        else return tbl[i][s.size()+bal] = f(i+1,s,bal) or f(i+1,s,bal-1) or f(i+1,s,bal+1); 
    }


    bool checkValidString(string s) {
        tbl.resize(s.size()+1,vector<int>(s.size()+s.size()+2,-1));
        return f(0,s,0);
    }
};