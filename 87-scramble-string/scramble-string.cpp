class Solution {
public:

map<string,bool>tbl;

    bool f(string s1,string s2){
        if(s1==s2)
        return 1;

        string key = s1 + "*" + s2;

        int n=s1.size();
        if(tbl.find(key)==tbl.end()){

        //checking if both strings have same characters
        int c=0;
        unordered_map<char,int>map;
        for(auto x:s1)
        map[x]++;

        for(auto x:s2){
            if(map.find(x)==map.end()){
                c=1;
                break;
            }

            if(map[x]==1)
            map.erase(x);
            else
            map[x]--;
        }

        if(c==1){
            tbl[key]=0;
            return tbl[key];
        }

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