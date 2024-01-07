class Solution {
public:

    void bfs(int i,vector<vector<int>>& a,vector<int>&visit){
        visit[i]=1;
        for(int j=0;j<a[i].size();j++){
            if(a[i][j]==1 and visit[j]==0)
            bfs(j,a,visit);
        }
    }


    int findCircleNum(vector<vector<int>>& a) {
        vector<int>visit(a.size());
        int i,j,k,c=0;

        for(i=0;i<a.size();i++){
            if(visit[i]==0){
            bfs(i,a,visit);
            c++;
            }
            
        }
        return c;
    }
};