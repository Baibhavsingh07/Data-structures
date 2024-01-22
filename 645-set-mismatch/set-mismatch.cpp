class Solution {
public:
    vector<int> findErrorNums(vector<int>& a) {
        vector<int>ans(2);
        unordered_set<int>set;
        for(auto x:a){
            if(set.find(x)!=set.end()){
                ans[0]=x;
            }else
            set.insert(x);
        }

        int i=1;
        for(i=1;i<=a.size();i++){
            if(set.find(i)==set.end()){
                ans[1]=i;
                return ans;
            }
        }
        ans[1]=i;
        return ans;
    }
};