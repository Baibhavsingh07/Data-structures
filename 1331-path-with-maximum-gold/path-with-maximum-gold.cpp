class Solution {
public:

    int dfs(int i,int j,vector<vector<int>>& a,vector<vector<int>>& v){

        int ans=0;

        int dx[4]={0,0,1,-1};
        int dy[4]={1,-1,0,0};

        for(int k=0;k<4;k++){
            int x = i+dx[k];
            int y = j+dy[k];

            if(x>=0 and y>=0 and x<a.size() and y<a[0].size() and v[x][y]==0 and a[x][y]!=0){
                v[x][y]=1;
                ans=max(ans,dfs(x,y,a,v));
                v[x][y]=0;
            }
        }
        return ans+a[i][j];
    }


    int getMaximumGold(vector<vector<int>>& a) {
        int i,j,c=0,s=0,ans=0;


        for(i=0;i<a.size();i++){
            for(j=0;j<a[0].size();j++){
                    vector<vector<int>>v(a.size(),vector<int>(a[0].size(),0));
                    v[i][j]=1;
                    ans=max(ans,dfs(i,j,a,v));
            }
        }

        return ans;
    }
};