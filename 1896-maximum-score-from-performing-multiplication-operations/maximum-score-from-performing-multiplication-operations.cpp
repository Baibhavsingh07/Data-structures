class Solution {
public:

vector<vector<int>>tbl;
// map<vector<int>,int>tbl;

    int maximumScore(vector<int>& a, vector<int>& b) {
        tbl.resize(b.size()+1,vector<int>(b.size()+1,0));

        for(int i=b.size()-1;i>=0;i--){
            for(int j=i;j>=0;j--){
                int n=a.size();
                int k = n - i+j-1;   //calculating index from last
                
                int l = b[i]*a[j]+tbl[i+1][j+1];
                int r = b[i]*a[k]+tbl[i+1][j];
                
                tbl[i][j] = max(l,r);

            }
        }

        return tbl[0][0];

        // return f(0,0,a,b);
    }
};