class Solution {
public:

    int dfs(int i,int par , vector<vector<int>>&a,vector<int>&v,int d){
        v[i]=1;
        if(d==i) return 1;

        for(auto x:a[i]){
            if(x!=par and !v[x]){
                if(dfs(x,i,a,v,d)==1) return 1;
             }
        }

        return 0;
    }

    bool validPath(int n, vector<vector<int>>& e, int s, int d) {
        vector<vector<int>>a(n,vector<int>(0));
        vector<int>v(n);

        for(auto x:e){
            a[x[0]].push_back(x[1]);
            a[x[1]].push_back(x[0]);
        }

        int i,j,c=0;
      
        if(dfs(s,-1,a,v,d)==1) return 1;
            

        return 0;
    }
};