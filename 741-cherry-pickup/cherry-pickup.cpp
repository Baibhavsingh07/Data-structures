class Solution {
public:

unordered_map<string,int>tbl;

    int f(int i,int j,int k,int l,vector<vector<int>>& a){
        if(i==a.size()-1 and j==a[0].size()-1 and k==a.size()-1 and l==a[0].size()-1)                   
            return a[i][j];
            
        if(i==a.size() or j==a[0].size() or k==a.size() or l==a[0].size() ) 
            return INT_MIN;


        if(a[i][j]==-1 or a[k][l]==-1) 
            return INT_MIN;

        string key = to_string(i)+'-'+to_string(j)+'-'+to_string(k);

        if(tbl.find(key)!=tbl.end()) return tbl[key];

        int ans=a[i][j];
        if(i!=k)ans+=a[k][l];

         ans += max({f(i+1,j,k+1,l,a),f(i+1,j,k,l+1,a),f(i,j+1,k+1,l,a),f(i,j+1,k,l+1,a)});

        // if(a[i][j]==1) a[i][j]=0;

        return tbl[key] = ans;
    }


    int cherryPickup(vector<vector<int>>& a) {
        return f(0,0,0,0,a)<0?0:f(0,0,0,0,a);
    }
};