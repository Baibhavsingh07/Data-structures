class Solution {
public:

vector<vector<int>>tbl;
// map<vector<int>,int>tbl;

    int f(int i,int j,vector<int>& a, vector<int>& b){ //a - multiplier , b-nums
        if(i==a.size())
        return 0;

    

        int n=b.size();

        if(tbl[i][j]!=INT_MIN)
        return tbl[i][j];

        

        int k = n - i+j-1;   //calculating index from last

        if(j>k)
        return 0;

        int l = a[i]*b[j]+f(i+1,j+1,a,b);
        int r = a[i]*b[k]+f(i+1,j,a,b);

        tbl[i][j] = max(l,r);
        

        return tbl[i][j];
    }

    int maximumScore(vector<int>& a, vector<int>& b) {
        tbl.resize(b.size()+1,vector<int>(b.size()+1,INT_MIN));

        // for(int i=b.size();i>=0;i--){
        //     for(int j=0;j<b.size();j++){

        //     }
        // }

        return f(0,0,b,a);
    }
};