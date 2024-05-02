class Solution {
public:

    vector<string>ans;

    void f(int i,string &curr,int n){
        if(i==n) {
            ans.push_back(curr);
            return;
        }

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
        f(0,curr,n);

        // sort(ans.begin(),ans.end()) ;

        if(ans.size()<k) return "";
        return ans[k-1];
    }
};