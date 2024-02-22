class Solution {
public:

// map<vector<int>,int>tbl;
vector<vector<int>>tbl;

    struct valcomp{
        bool operator()(string &a,string &b){
            if(a.size()==b.size()) return a<b;
            else return a.size()<b.size();
        }
    };

    int f(int i,int prev,vector<string>&a){
        if(i>=a.size()) return 0;

        int l=0,r=0;

        if(tbl[i][prev+1]!=-1) return tbl[i][prev+1];

         l = f(i+1,prev,a);

         if(prev==-1)
         l = max(l,1+f(i+1,i,a));
        else if(a[i].size() - a[prev].size() ==1){
             int x=0,y=0,c=0;
             while(x<a[i].size() and y<a[prev].size()){
                 if(a[i][x]==a[prev][y]){
                     x++;y++;
                 }else {
                     x++;
                     c++;
                 }
             }

             if(c==1 or x==a[i].size()-1){
                 r = 1+f(i+1,i,a);
             }
         }

         return tbl[i][prev+1] =  max(l,r);

    }


    int longestStrChain(vector<string>& a) {
        sort(a.begin(),a.end(),valcomp());

        tbl.resize(a.size()+1,vector<int>(a.size()+2,-1));

        for(auto x:a) cout<<x<<" ";

        return f(0,-1,a);

        return 1;
    }
};