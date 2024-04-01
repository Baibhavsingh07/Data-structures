class Solution {
public:

    bool check(int m,vector<vector<int>>&a){
        int i,j,c=0;
        for(i=0;i<a.size();i++){
            if(m<a[i][1]) return 0;
            m=m-a[i][0];
        }

        return m>=0;
    }


    struct valcomp{
        bool operator()(vector<int>&x,vector<int>&y){
            if(y[1]-y[0] < x[1]-x[0]) return 1;

            if(y[1]-y[0] == x[1]-x[0])
            return y[1] > x[1];

            return 0;
        }
    };

    int minimumEffort(vector<vector<int>>& a) {
        int i,j,c=0,s=0,l=1,h=0,ans=INT_MAX;

        sort(a.begin(),a.end(),valcomp());

        for(auto x:a)h+=x[1];

        while(l<=h){
            int m = l + (h-l)/2;
            if(check(m,a)){
                ans=m;
                h=m-1;
            }else l=m+1;
        }
        for(auto x:a)cout<<x[0]<<" "<<x[1]<<endl;

        // return 1;

        return ans;

    }
};