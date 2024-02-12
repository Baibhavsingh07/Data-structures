class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& a) {
        int n=a.size(),m=a[0].size();
        vector<vector<int>>ans(n,vector<int>(m,0));
        vector<vector<int>>v(n,vector<int>(m,0));

        int i,j,c=0;
        queue<pair<int,int>>q;

        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                if(!a[i][j])
                q.push({i,j});
            }
        }

        while(!q.empty()){
            int l = q.size();
            while(l){
                auto curr = q.front();
                q.pop();

                ans[curr.first][curr.second]=c;

                int x[4]={0,0,1,-1};
                int y[4]={1,-1,0,0};

                for(i=0;i<4;i++){
                    if(x[i]+curr.first>=0 and x[i]+curr.first<n and y[i]+curr.second>=0 and y[i]+curr.second<m ){
                        if(a[x[i]+curr.first][y[i]+curr.second]==1 and v[x[i]+curr.first][y[i]+curr.second]==0){
                            v[x[i]+curr.first][y[i]+curr.second]=1;
                        q.push({x[i]+curr.first,y[i]+curr.second});
                        }
                    }
                }
                l--;

            }
            c++;
        }

        return ans;

    }
};