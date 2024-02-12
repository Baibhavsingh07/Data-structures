class Solution {
public:

    void dfs(int i,int j,vector<vector<bool>>& vis,vector<vector<char>>& a){
        if(i+1<a.size() and a[i+1][j]=='1' and !vis[i+1][j]){
            vis[i+1][j]=1;
            dfs(i+1,j,vis,a);
        }
        if(i-1>=0 and a[i-1][j]=='1' and !vis[i-1][j]){
            vis[i-1][j]=1;
            dfs(i-1,j,vis,a);
        }
        if(j-1>=0 and a[i][j-1]=='1' and !vis[i][j-1]){
            vis[i][j-1]=1;
            dfs(i,j-1,vis,a);
        }
        if(j+1<a[0].size() and a[i][j+1]=='1' and !vis[i][j+1]){
            vis[i][j+1]=1;
            dfs(i,j+1,vis,a);
        }
            
        
    }


    int numIslands(vector<vector<char>>& a) {
        vector<vector<bool>>vis(a.size(),vector<bool>(a[0].size(),0));

        int c=0;

        for(int i=0;i<a.size();i++){
            for(int j=0;j<a[0].size();j++){
                if(!vis[i][j] and a[i][j]=='1'){
                    c++;
                    vis[i][j]=1;
                    dfs(i,j,vis,a);
                }
            }
        }

        return c;

    }
};