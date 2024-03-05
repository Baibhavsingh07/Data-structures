class Solution {
public:

    int check(int m,vector<int>&a,int time){
        long long c=0;
        for(auto x:a){
            c+=x%m==0?x/m:x/m+1;
        }
        if(c<=time)return 1; 
        return 0;
    }

    int minEatingSpeed(vector<int>& a, int time) {
        int i,j,k=time;
        long long l=1,h=0,ans=INT_MAX;

        for(auto x:a)if(h<x)h=x;

        while(l<=h){
            long long m = l+(h-l)/2;

            if(check(m,a,time)){
                ans=min(ans,m);
                h=m-1;
            }else{
                l=m+1;
            }
        }
        return ans;
    }
};