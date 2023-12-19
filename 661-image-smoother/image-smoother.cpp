class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& a) {
        int i,j,c=0,s=0;
        int n=a.size();
        int m = a[0].size();
        vector<vector<int>>ans(n,vector<int>(m,0));

        for(i=0;i<n;i++){
            
            for(j=0;j<m;j++){
                c=0;
                s=0;

                int x1,y1,x2,y2;
                x1=i-1>=0?i-1:0;
                x2=i+1<n?i+1:n-1;
                y1=j-1>=0?j-1:0;
                y2=j+1<m?j+1:m-1;

                for(int x=x1;x<=x2;x++){
                    for(int y=y1;y<=y2;y++){
                        c+=a[x][y];
                        s++;
                    }
                }

                // c+=i-1>=0 ? a[i-1][j]:0;
                // c+=i+1<n ? a[i+1][j]:0;
                // c+=j-1>=0 ? a[i][j-1]:0;
                // c+=j+1<m ? a[i][j+1]:0;
                // c+= i+1<n and  j+1<m ? a[i+1][j+1]:0;
                // c+= i+1<n and  j-1>=0 ? a[i+1][j-1]:0;
                // c+= i-1>=0 and  j+1<m ? a[i-1][j+1]:0;
                // c+= i-1>=0 and  j-1>=0 ? a[i-1][j-1]:0;

                // if(i-1>=0)
                // s++;
                // if(j-1>=0)
                // s++;
                // if(i+1<n)
                // s++;
                // if(j+1<m)
                // s++;
                // if(i-1>=0 and j-1>=0)
                // s++;
                // if(i+1<n and j+1<m)
                // s++;
                // if(i+1<n and j-1>=0)
                // s++;
                // if(i-1>=0 and j+1<m)
                // s++;
                

            ans[i][j]=c/s;
                
            }
        }

        return ans;
    }
};