class Solution {
public:

    vector<string>ans;

    int m;

    void f(int i,string &curr,int n){
        if(i==n) {
            ans.push_back(curr);
            return;
        }

        if(ans.size()==m) return;

        vector<char>x = {'a','b','c'};

        for(auto v:x){
            if( curr.size()==0 or v!=curr.back()){
                curr+=v;

                f(i+1,curr,n);

                curr.pop_back();
            }
        }

    }

    string getHappyString(int n, int k) {
        string curr;
        m=k;
        f(0,curr,n);

        // sort(ans.begin(),ans.end()) ;

        if(ans.size()<k) return "";
        return ans[k-1];
    }
};