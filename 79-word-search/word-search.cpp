class Solution {
public:

    bool dfs(int i,int j,vector<vector<char>>& a, string &w,vector<vector<int>>&v,int ind){
        v[i][j]=1;

        if(ind==w.size()) return 1;

        int dx[4]={0,0,1,-1};
        int dy[4]={1,-1,0,0};

        for(int k=0;k<4;k++){
            int x = i+dx[k];
            int y = j+dy[k];

            

            if(x>=0 and y>=0 and x<a.size() and y<a[0].size() and v[x][y]==0 and a[x][y]==w[ind]){
                if(dfs(x,y,a,w,v,ind+1)==1) return 1;
            }
        }

        v[i][j]=0;
        return 0;
    }


    bool exist(vector<vector<char>>& a, string word) {
        vector<vector<int>>v(a.size(),vector<int>(a[0].size(),0));
        int i,j,c=0;

        for(i=0;i<a.size();i++){
            for(j=0;j<a[0].size();j++){
                if(a[i][j]==word[0] and v[i][j]==0){
                    if(dfs(i,j,a,word,v,1)==1) return 1;
                }
            }
        }

        return 0;

    }
};