class Solution {
public:

    int dfs(int i,vector<vector<int>>&a,vector<int>&v,vector<int>&pv){
        v[i]=1;
        pv[i]=1;

        for(auto x:a[i]){
            if(v[x]==0){
                if(dfs(x,a,v,pv)==1) return 1;
            }else if(pv[x]==1)return 1;
        }
        pv[i]=0;

        return 0;
    }

    bool canFinish(int n, vector<vector<int>>& aa) {
        vector<int>v(n,0);
        vector<int>pv(n,0);
        vector<int>ans;

        vector<vector<int>>a(n,vector<int>(0));

        for(int i=0;i<aa.size();i++){
            a[aa[i][1]].push_back(aa[i][0]);
        }

        for(int i=0;i<n;i++){
            if(!v[i]){
                if(dfs(i,a,v,pv)==1) return 0;
            }
        }

        return 1;
        

    }
};