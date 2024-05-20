class Solution {
public:

    vector<int>ans;

    void f(int i,vector<int>& a,int curr){
        if(i==a.size()) {
            ans.push_back(curr);
            return;
        }

        f(i+1,a,curr);

        int x=curr;
        curr^=a[i];
        f(i+1,a,curr);
        curr=x;
    }

    int subsetXORSum(vector<int>& a) {
        int curr=0;

        f(0,a,curr);

        return accumulate(ans.begin(),ans.end(),0);
    }
};