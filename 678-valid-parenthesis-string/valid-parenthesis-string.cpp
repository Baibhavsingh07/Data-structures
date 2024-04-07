class Solution {
public:

map<vector<int>,int>tbl;

    int f(int i,string s,int bal){
        if(i==s.size() and bal==0) return 1;
        if(i==s.size()) return 0;

        if(bal<0) return 0; 

        if(tbl.find({i,bal})!=tbl.end()) return tbl[{i,bal}];

        if(s[i]=='(') return tbl[{i,bal}] = f(i+1,s,bal+1);
        if(s[i]==')') return tbl[{i,bal}] = f(i+1,s,bal-1);
        else return tbl[{i,bal}] = f(i+1,s,bal) or f(i+1,s,bal-1) or f(i+1,s,bal+1); 
    }


    bool checkValidString(string s) {
        return f(0,s,0);
    }
};