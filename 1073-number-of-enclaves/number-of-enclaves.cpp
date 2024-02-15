class Solution {
public:
    int numEnclaves(vector<vector<int>>& a) {
        int n=a.size(),m=a[0].size();
        vector<vector<int>>v(n,vector<int>(m,0));

        queue<pair<int,int>>q;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(i==0 || j==0 || i==n-1 || j==m-1 ){
                   if(a[i][j]==1){
                       q.push({i,j});
                       v[i][j]=1;
                   }
                }
            }
        }

        while(!q.empty()){
            auto curr = q.front();
            q.pop();
            int i=curr.first;
            int j=curr.second;

            
        int x[]={-1,0,1,0};
        int y[]={0,1,0,-1};

            for(int k = 0;k<4;k++){
                int nx=i+x[k];
                int ny=j+y[k];

                if(nx>=0 and ny>=0 and nx<n and ny<m and v[nx][ny]==0 and a[nx][ny]==1){
                    q.push({nx,ny});
                    v[nx][ny]=1;

                }

            }
        }

        int c=0;

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(v[i][j]==0 and a[i][j]==1)c++;
            }
        }
        return c;


    }
};