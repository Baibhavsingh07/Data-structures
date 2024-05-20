class Solution {
public:

    vector<int>ans;

    int f(int i,vector<int>& a,int x){
        if(i==a.size()) {
            return x;
        }

        auto l =f(i+1,a,x);
        auto r = f(i+1,a,x^a[i]);

        return l +   r;
    }

    int subsetXORSum(vector<int>& a) {
        return f(0,a,0);
    }
};