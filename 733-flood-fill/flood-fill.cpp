class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& a, int sr, int sc, int color) {
        int n=a.size(),m=a[0].size();
        vector<vector<int>>ans(n,vector<int>(m,0));
        vector<vector<int>>v(n,vector<int>(m,0));

        int col = a[sr][sc];

        for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
        ans[i][j]=a[i][j];

        queue<pair<int,int>>q;
        q.push({sr,sc});
        v[sr][sc]=1;

        while(!q.empty()){
            auto x=q.front();
            auto i = x.first;
            auto j = x.second;
            q.pop();

            ans[i][j]=color;

            int dx[4] = {0,0,1,-1};
            int dy[4] = {1,-1,0,0};

            for(int k = 0;k<4;k++){
                if( i+dx[k]>=0 and i+dx[k]<n and j+dy[k]>=0 and j+dy[k]<m and ans[i+dx[k]][j+dy[k]]==col and !v[i+dx[k]][j+dy[k]]){
                    v[i+dx[k]][j+dy[k]]=1;
                    q.push({i+dx[k],j+dy[k]});
                }
            }
        }

        return ans;


    }
};