class Solution {
public:
    void solve(vector<vector<char>>& a) {
        int n=a.size(),m=a[0].size();
        vector<vector<int>>v(n,vector<int>(m,0));

        queue<pair<int,int>>q;
        for(int i=0;i<n;i++){
            if(a[i][m-1]=='O'){
                v[i][m-1]=1;
                q.push({i,m-1});
            }
            if(a[i][0]=='O'){
                v[i][0]=1;
                q.push({i,0});
            }
        }

        for(int i=0;i<m;i++){
            if(a[0][i]=='O'){
                v[0][i]=1;
                q.push({0,i});
            }
            if(a[n-1][i]=='O'){
                v[n-1][i]=1;
                q.push({n-1,i});
            }
        }

        while(!q.empty()){
            auto x = q.front();
            q.pop();

            int i=x.first,j=x.second;

            int dx[4]={0,0,1,-1};
            int dy[4]={1,-1,0,0};

            for(int k = 0;k<4;k++){
                if(i+dx[k]>=0 and i+dx[k]<n and j+dy[k]>=0 and j+dy[k]<m and v[i+dx[k]][j+dy[k]]==0 and a[i+dx[k]][j+dy[k]]=='O' ){
                    v[i+dx[k]][j+dy[k]]=1;
                    q.push({i+dx[k],j+dy[k]});
                }
            }
        }

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(v[i][j]==0) a[i][j]='X';
                else a[i][j]='O';
            }
        }
    }
};