class Solution {
public:

    bool dfs(int i,int j,vector<vector<char>>&a,vector<vector<int>>&v,pair<int,int> p){
        v[i][j]=1;

        int dx[4] ={0,0,1,-1}; 
        int dy[4] ={1,-1,0,0};

        for(int k=0;k<4;k++){
            int x = i + dx[k];
            int y = j + dy[k];

            

            if(x>=0 and y>=0 and x<a.size() and y<a[0].size() and a[x][y]==a[i][j] and v[x][y]==0 ){
                if(dfs(x,y,a,v,{i,j})==1) return 1;
            } else if(x>=0 and y>=0 and x<a.size() and y<a[0].size() and a[x][y]==a[i][j] and v[x][y]==1 and (p.first!=x or p.second!=y )) return 1;
        }


        return 0;
    }


    bool containsCycle(vector<vector<char>>& a) {
        int n=a.size(),m=a[0].size();

        vector<vector<int>>v(n,vector<int>(m,0));
        vector<vector<int>>pv(n,vector<int>(m,0));

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!v[i][j])
                if(dfs(i,j,a,v,{-1,-1})==1)return 1;
            }
        }

        return 0;

    }
};