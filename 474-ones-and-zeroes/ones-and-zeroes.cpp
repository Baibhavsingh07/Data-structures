class Solution {
public:

    pair<int,int> oz(string &s){
        int zero=0,one=0;

        for(auto x:s){
            if(x=='1')
            one++;
            else
            zero++;
        }

        return {one,zero};
    }



    int f(int i,vector<pair<int,int>>&a, int m, int n,vector<vector<vector<int>>>&tbl){
        if(i<=0){
            return 0;

        }

        if(tbl[i][m][n]==-1){

        int l = f(i-1,a,m,n,tbl);
        int r=0;
        auto x = a[i-1];

        if(m>=x.second and n>=x.first){

        r = 1+f(i-1,a,m-x.second,n-x.first,tbl);

        }



        

       tbl[i][m][n]= max(l,r);
    }

       return  tbl[i][m][n];
       
    }

    int findMaxForm(vector<string>& a, int m, int n) {
        int i=a.size(),j,k,c=0;


        vector<pair<int,int>>s;
        for(auto x:a){
            auto v = oz(x);
            s.push_back(v);
        }
vector<vector<vector<int>>>tbl(a.size()+1,vector<vector<int>>(m+1,vector<int>(n+1,-1)));




        return f(i,s,m,n,tbl);
        
        
    }
};
