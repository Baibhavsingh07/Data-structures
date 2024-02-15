class Solution {
public:

    // int dfs(int i,vector<vector<int>>&a,vector<int>&v,vector<int>&ans,vector<int>&pv){
    //     v[i]=1;
    //     pv[i]=1;

    //     for(auto x:a[i]){
    //         if(!v[x]){
    //             if(dfs(x,a,v,ans,pv)==0)
    //             return 0;
    //         }else if(pv[x]==1){
    //             return 0;
    //         }
    //     }
    //     pv[i]=0;
    //     ans.push_back(i);
    //     return 1;
    // }


    vector<int> eventualSafeNodes(vector<vector<int>>& aa) {
        int n=aa.size();
        vector<int>v(n,0);
        vector<int>d(n,0);
        vector<int>ans;

        vector<vector<int>>a(n,vector<int>(0));

        for(int i=0;i<n;i++){
            for(auto x:aa[i]){
                a[x].push_back(i);
            }
        }

        
        for(int i=0;i<n;i++)
        for(auto y:a[i])
        d[y]++;
        
        queue<int>q;
        
        for(int i=0;i<n;i++){
            if(!d[i])
            q.push(i);
        }
        
        while(!q.empty()){
            int curr = q.front();
            q.pop();
            
            for(auto x:a[curr]){
                d[x]--;
                if(d[x]==0) q.push(x);
            }
            
            ans.push_back(curr);
            
        }

        sort(ans.begin(),ans.end());

        return ans;
    }
};