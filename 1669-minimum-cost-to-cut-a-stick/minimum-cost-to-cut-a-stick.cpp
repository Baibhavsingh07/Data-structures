class Solution {
public:

vector<vector<int>>tbl;

    int f(int i,int j,vector<int>&a){
        if(i>j) return 0;

        int ans=INT_MAX;

        if(tbl[i][j]!=-1) return tbl[i][j];

        for(int k=i;k<=j;k++){
            int c = a[j+1]-a[i-1]+f(i,k-1,a)+f(k+1,j,a);
            ans=min(ans,c);
        }

        return tbl[i][j] = ans;      

    }


    int minCost(int n, vector<int>& a) {
        a.push_back(0);
        a.push_back(n);
        sort(a.begin(),a.end());

        tbl.resize(a.size()+1,vector<int>(a.size()+1,-1));
        return f(1,a.size()-2,a);
    }
};