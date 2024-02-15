class Solution {
public:

    int dfs(int i,vector<vector<int>>&a,vector<int>&v,vector<int>&ans,vector<int>&pv){
        v[i]=1;
        pv[i]=1;

        for(auto x:a[i]){
            if(!v[x]){
                if(dfs(x,a,v,ans,pv)==0)
                return 0;
            }else if(pv[x]==1){
                return 0;
            }
        }
        pv[i]=0;
        ans.push_back(i);
        return 1;
    }


    vector<int> eventualSafeNodes(vector<vector<int>>& a) {
        int n=a.size();
        vector<int>v(n,0);
        vector<int>pv(n,0);
        vector<int>ans;


        for(int i=0;i<n;i++){
            if(!v[i]){
                dfs(i,a,v,ans,pv);
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};