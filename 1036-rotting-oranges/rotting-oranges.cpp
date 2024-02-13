class Solution {
public:
    int orangesRotting(vector<vector<int>>& a) {
        int n=a.size(),m=a[0].size();
        vector<vector<int>>v(n,vector<int>(m,0));

        int ans=0;

        queue<pair<int,int>>q;
        for(int i=0;i<n;i++)
        for(int j=0;j<m;j++){
            if(a[i][j]==2){
        q.push({i,j});
        v[i][j]=1;
            }
        }

        while(!q.empty()){
            int l = q.size();
            while(l--){
                auto x=q.front();
                auto i = x.first;
                auto j = x.second;
                q.pop();

                a[i][j]=2;


                int dx[4] = {0,0,1,-1};
                int dy[4] = {1,-1,0,0};

            for(int k = 0;k<4;k++){
                if( i+dx[k]>=0 and i+dx[k]<n and j+dy[k]>=0 and j+dy[k]<m and a[i+dx[k]][j+dy[k]]==1 and !v[i+dx[k]][j+dy[k]]){
                    v[i+dx[k]][j+dy[k]]=1;
                    q.push({i+dx[k],j+dy[k]});
                }
            }
            }

            if(q.size()==0)break;
            ans++;

        }

        for(auto x:a){
            for(auto y:x)
            if(y==1)
            return -1;
        }

        return ans;

    }
};