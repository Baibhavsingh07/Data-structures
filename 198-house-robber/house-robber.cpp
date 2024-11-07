class Solution {
public:

    unordered_map<int,int>map;

    int f(int i,vector<int>& a){
        if(i>=a.size()) return 0;

        if(map.find(i)!=map.end()) return map[i];

        int l = f(i+1,a);
        int r=0;
            r = a[i]+f(i+2,a);

        return map[i] = max(l,r);
    }

    int rob(vector<int>& a) {
        return f(0,a);
    }
};