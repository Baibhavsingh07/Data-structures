class Solution {
public:

map<string,int>tbl;

    bool f(string s1,string s2){
        if(s1==s2)
        return 1;

        string key = s1 + "*" + s2;

        int n=s1.size();
        if(tbl.find(key)==tbl.end()){
        for(int i=1;i<n;i++){

            int l = f(s1.substr(0,i),s2.substr(0,i)) and f(s1.substr(i),s2.substr(i));
            int r = f(s1.substr(0,i),s2.substr(n-i)) and f(s1.substr(i),s2.substr(0,n-i));

            if(l or r) return tbl[key] = 1;
        }

        return tbl[key]=0;

        }

        return tbl[key];

    }

    bool isScramble(string s1, string s2) {
        return f(s1,s2);
    }
};