class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& a, int t) {
        int i,j,c=0,s=0;
        vector<vector<int>>aa;
        set<vector<int>>ans;

        for(i=0;i<a.size();i++){
            for(j=i+1;j<a.size();j++){
                unordered_map<long long,int>map;

                for(int k=j+1;k<a.size();k++){
                    long long vv = (long long) t - (long long)a[i] -(long long)a[j] -(long long)a[k];
                    if(map.find(vv)!=map.end()){
                        
                        vector<int>x = {a[i],a[j],a[k],int(vv)};
                        sort(x.begin(),x.end());
                        ans.insert(x);
                    }
                    map[a[k]]++;
                }

                if(map[a[j]]==1) map.erase(a[j]);
                else map[a[j]]--;
            }
        }

        for(auto x:ans){
            aa.push_back(x);
        }
        return aa;
    }
};