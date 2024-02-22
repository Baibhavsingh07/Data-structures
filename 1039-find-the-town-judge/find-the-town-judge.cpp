class Solution {
public:
    int findJudge(int n, vector<vector<int>>& a) {
        vector<int>v(n+1);

        for(auto x:a){
        v[x[1]]++;
        v[x[0]]--;

        }

        for(int i=1;i<=n;i++) if(v[i]==n-1) return i;

        return -1;
    }
};