class Solution {
public:
    vector<int> findErrorNums(vector<int>& a) {
        vector<int>ans(2);
        set<int>set;
        for(auto x:a){
            if(set.find(x)!=set.end()){
                ans[0]=x;
            }else
            set.insert(x);
        }

        int i=1;
        for(auto x:set){
            if(x!=i){
                ans[1]=i;
                return ans;
            }
            i++;
        }
        ans[1]=i;
        return ans;
    }
};