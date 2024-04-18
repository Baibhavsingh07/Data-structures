class Solution {
public:
    int islandPerimeter(vector<vector<int>>& a) {
        int i,j,c=0,s=0;

        for(i=0;i<a.size();i++){
            for(j=0;j<a[0].size();j++){
                if(a[i][j]==1){
                    int dx[4]={0,0,1,-1};
                    int dy[4]={1,-1,0,0};
                    
                    for(int k=0;k<4;k++){
                        int x = i+dx[k];
                        int y = j+dy[k];

                        if(x<0 or y<0 or x==a.size() or y==a[0].size() or a[x][y]==0)c++;
                    }

                }
            }

        }

        return c;
    }
};