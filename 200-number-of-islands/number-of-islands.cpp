class Solution {
public:

    void dfs(int x,int y,vector<vector<bool>>& vis,vector<vector<char>>& a){
        
            queue<pair<int,int>>q;
            q.push({x,y});

            while(!q.empty()){
                auto curr = q.front();
                q.pop();

                int  i=curr.first;
                int j = curr.second;

                if(i+1<a.size() and a[i+1][j]=='1' and vis[i+1][j]==0){
                    vis[i+1][j]=1;
                q.push({i+1,j});
                }

                if(i-1>=0 and a[i-1][j]=='1' and vis[i-1][j]==0){
                    vis[i-1][j]=1;
                q.push({i-1,j});
                }

                if(j-1>=0 and a[i][j-1]=='1' and vis[i][j-1]==0){
                    vis[i][j-1]=1;
                q.push({i,j-1});
                }

                if(j+1<a[0].size() and a[i][1+j]=='1' and vis[i][j+1]==0){
                vis[i][j+1]=1;
                q.push({i,j+1});

                }
            }
        
    }


    int numIslands(vector<vector<char>>& a) {
        vector<vector<bool>>vis(a.size(),vector<bool>(a[0].size(),0));

        int c=0;

        for(int i=0;i<a.size();i++){
            for(int j=0;j<a[0].size();j++){
                if(!vis[i][j] and a[i][j]=='1'){
                    c++;
                    dfs(i,j,vis,a);
                }
            }
        }

        return c;

    }
};