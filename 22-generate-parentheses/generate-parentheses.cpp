class Solution {
public:

    void f(int i,int r,string &curr,vector<string>&ans,int n){
        if(r==n){
            ans.push_back(curr);
            return ;
        }

        if(i<n){
        curr+='(';
        f(i+1,r,curr,ans,n);

        curr.pop_back();
        }

        if(i-r!=0){
            curr+=')';
            f(i,r+1,curr,ans,n);
            curr.pop_back();
        }

    }

    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        int i,j,k,c=0;

        string curr="";

        f(0,0,curr,ans,n);

        return ans;
    }
};