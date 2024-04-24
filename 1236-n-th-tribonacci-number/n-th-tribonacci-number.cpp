class Solution {
public:

vector<int>ans;

    int f(int n){
        if(n==0) return 0;
        if(n==1 or n==2) return 1;

        if(ans[n]!=-1) return ans[n];

        return ans[n] = f(n-1)+f(n-2)+f(n-3);
    }

    int tribonacci(int n) {
        ans.resize(n+1,-1);
        
        return f(n);
    }
};