class Solution {
public:

map<vector<int>,int>tbl;

    int topal(int i,int j,string &s){
        int c=0;
        while(i<j){
            if(s[i++]!=s[j--])c++;
        }

        return c;
    }
    

    int f(int i,string &s,int k){
        if(i==s.size() and k==0) return 0; 
        if(i==s.size()) return 1e9; 

        int ans=INT_MAX;

        if(tbl.find({i,k})!=tbl.end()) return tbl[{i,k}];

        for(int j=i;j<s.size();j++){
            ans=min(ans, topal(i,j,s) + f(j+1,s,k-1));
        }

        return tbl[{i,k}] = ans;

    }

    int palindromePartition(string s, int k) {
        return f(0,s,k);
    }
};