class Solution {
public:

vector<vector<int>>tbl;
// map<vector<int>,int>tbl;

    int f(int i,vector<int>&a,int last){
        if(i==a.size())
        return 0;

        int x=0,y=0;
        if(tbl[i][last+1]==-1){
        if(last==-1 or a[i]>a[last]){
            x =  1+f(i+1,a,i);
        }
            y = f(i+1,a,last);

            tbl[i][last+1] = max(x,y);

        }
        return tbl[i][last+1];
    }

    int lengthOfLIS(vector<int>& a) {
        // int x = *max_element(a.begin(),a.end());
        tbl.resize(a.size(),vector<int>(a.size(),-1));
        return f(0,a,-1);
    }
};