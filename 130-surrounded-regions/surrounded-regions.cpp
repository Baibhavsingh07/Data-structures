class Solution {
public:

    void dfs(int i,int j,vector<vector<char>>& a,vector<vector<int>>& v){
        v[i][j]=1;

        int d[4][2] = {{0,1},{0,-1},{1,0},{-1,0}};

        for(auto val:d){
            int x = i+val[0];
            int y = j+val[1];

            if(x>=0 and y>=0 and x<a.size() and y<a[0].size() and v[x][y]==0 and a[x][y]=='O')
            dfs(x,y,a,v);

        }
        
    }

    void solve(vector<vector<char>>& a) {
        int n=a.size(),m=a[0].size();
        int i,j;
        vector<vector<int>>v(n,vector<int>(m,0));

        for(i=0;i<m;i++){
            if(a[0][i]=='O' and !v[0][i]) dfs(0,i,a,v);
        }
        
        for(i=0;i<m;i++){
            if(a[n-1][i]=='O' and !v[n-1][i]) dfs(n-1,i,a,v);
        }
        
        for(i=0;i<n;i++){
            if(a[i][0]=='O' and !v[i][0]) dfs(i,0,a,v);
        }
        
        for(i=0;i<n;i++){
            if(a[i][m-1]=='O' and !v[i][m-1]) dfs(i,m-1,a,v);
        }

        for(i=0;i<n;i++) for(j=0;j<m;j++) if(v[i][j]==0) a[i][j]='X'; 

    }
};