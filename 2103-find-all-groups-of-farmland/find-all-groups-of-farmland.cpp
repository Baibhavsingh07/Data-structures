class Solution {
public:

    void dfs(int i,int j,vector<vector<int>>&a,vector<vector<int>>&v,int &ri,int &rj){
        v[i][j]=1;

        if(i+1<a.size() and a[i+1][j]==1 and v[i+1][j]==0){
            ri=max(ri,i+1);
            dfs(i+1,j,a,v,ri,rj);
        }
         
        if(j+1<a[0].size() and a[i][j+1]==1 and v[i][j+1]==0){
            rj=max(rj,j+1);
            dfs(i,j+1,a,v,ri,rj);
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

                    dfs(i,j,a,v,ri,rj);

                    ans.push_back({li,lj,ri,rj});
                }
            }
        }

        return ans;

    }
};