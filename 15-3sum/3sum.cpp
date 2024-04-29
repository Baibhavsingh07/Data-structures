class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& a) {
        vector<vector<int>>ans;
        int i,j,k,c=0;

        sort(a.begin(),a.end());

        set<vector<int>>set;

        for(i=0;i<a.size();i++){
            j=i+1;
            int k=a.size()-1;

            while(j<k){
                if(a[i]+a[j]+a[k]==0) {
                    vector<int>x = {a[i],a[j],a[k]};
                     sort(x.begin(),x.end());
                    set.insert(x);
                    j++;k--;
                }else if(a[i]+a[j]+a[k]>0){
                    k--;
                }else j++;
            }
        }

        for(auto x:set)ans.push_back(x);

        return ans;
        
    }
}; 