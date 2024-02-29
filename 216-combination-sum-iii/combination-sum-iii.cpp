class Solution {
public:

set<vector<int>>set;
vector<vector<int>>ans;

    void f(int i,int k,int n,vector<int>&curr){
        if(k==0 and n==0) {set.insert(curr);
        return;
        }

        if(k<=0 or n<=0 or i>9 ) return ;

        f(i+1,k,n,curr);

        curr.push_back(i);
        f(i+1,k-1,n-i,curr);
        curr.pop_back();
    }


    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int>curr;

        f(1,k,n,curr);

        for(auto x:set) ans.push_back(x);

        return ans;
    }
};