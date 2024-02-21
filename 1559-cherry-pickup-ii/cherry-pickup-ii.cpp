class Solution {
public:

// unordered_<map<string,int>tbl;
vector<vector<vector<int>>>tbl;

    int f(int i,int j,int y,vector<vector<int>>& a){
        if(i>=a.size()) return 0;

        int l=0,r=0;


        if(tbl[i][j][y]!=-1) return tbl[i][j][y];

        for(int p=-1;p<2;p++){
            for(int q=-1;q<2;q++){
                int ny1=j+p;
                int ny2=y+q;

                if(ny1>=0 and ny2>=0 and ny1<a[0].size() and ny2<a[0].size())
                if(j==y)
                l = max(l,a[i][y] + f(i+1,ny1,ny2,a));
                else
                l=max(l,a[i][j]+a[i][y]+f(i+1,ny1,ny2,a)); 
            }
        }

        return tbl[i][j][y]= l;
    }

    int cherryPickup(vector<vector<int>>& a) {
        tbl.resize(a.size()+1,vector<vector<int>>(a[0].size()+1,vector<int>(a[0].size()+1,-1)));
        return f(0,0,a[0].size()-1,a);
    }
};