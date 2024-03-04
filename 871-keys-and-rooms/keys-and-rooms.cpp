class Solution {
public:

    void dfs(int i,vector<vector<int>>& a,vector<int>& v){
        v[i]=1;

        for(auto x:a[i])
        if(!v[x])
        dfs(x,a,v);
    }

    bool canVisitAllRooms(vector<vector<int>>& a) {
        int n=a.size();
        vector<int>v(n,0);
        // q.push(0);

        dfs(0,a,v);

       

        for(auto x:v)if(x==0) return 0;

        return 1;
    }
};