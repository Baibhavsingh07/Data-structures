class Solution {
public:

    int ans=0;

    void f(int i,vector<string>&a,unordered_set<char>curr){
        if(i==a.size()){
            if(ans<curr.size()) ans=curr.size();
            return;
        }

        f(i+1,a,curr);
        for(auto x:a[i]){
            if(curr.find(x)!=curr.end())return;
            curr.insert(x);
        }

        f(i+1,a,curr);
    }

    int maxLength(vector<string>& a) {
        unordered_set<char>curr;

        f(0,a,curr);
        return ans;
    }
};