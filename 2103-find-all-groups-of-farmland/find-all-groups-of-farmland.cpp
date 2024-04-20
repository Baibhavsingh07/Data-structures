class Solution {
public:

    void dfs(int i,int j,vector<vector<int>>&a,vector<vector<int>>&v,int &li,int &lj,int &ri,int &rj){
        v[i][j]=1;

        int c=0;

        int dx[4]={0,1};
        int dy[4]={1,0};

        for(int k=0;k<2;k++){
            int x=i+dx[k];
            int y=j+dy[k];

            if(x>=0 and y>=0 and x<a.size() and y<a[0].size() and v[x][y]==0 and a[x][y]==1){
                ri=max(ri,x);
                rj=max(rj,y);
                dfs(x,y,a,v,li,lj,ri,rj);
            }
        }

        


    }

    vector<vector<int>> findFarmland(vector<vector<int>>& a) {
        vector<vector<int>>ans;

        int i,j,c=0,s=0;
        vector<vector<int>>v(a.size(),vector<int>(a[0].size(),0));

        for(i=0;i<a.size();i++){
            for(j=0;j<a[0].size();j++){
                if(!v[i][j] and a[i][j]==1){
                    int li=i,lj=j,ri=i,rj=j;

                    dfs(i,j,a,v,li,lj,ri,rj);

                    ans.push_back({li,lj,ri,rj});
                }
            }
        }

        return ans;

    }
};