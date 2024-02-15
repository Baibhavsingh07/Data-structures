class Solution {
public:

    int dfs(int i,vector<vector<int>>& a,vector<int>&v,vector<int>&col,int color){
        v[i]=1;
        col[i]=color;

        for(auto x:a[i]){
            if(v[x]==0){
                if(dfs(x,a,v,col,!color)==0) return 0;
            }else if(color == col[x]) return 0;
        }

        return 1;

    }


    bool isBipartite(vector<vector<int>>& a) {
        int n=a.size(),m=a[0].size();

        vector<int>col(a.size(),-1);
        vector<int>v(a.size(),0);

        for(int i=0;i<n;i++){

           if(!v[i]){
               if(dfs(i,a,v,col,0)==0) return 0;
           }
        }
        return 1;

        
    }
};