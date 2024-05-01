class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& a) {
        vector<vector<int>>ans;

        int i,j,c=0,s=0;
        sort(a.begin(),a.end());

        for(i=0;i<a.size();i++){
            while(i>0 and i<a.size() and a[i]==a[i-1]) i++;
            
            j=i+1;
            int k=a.size()-1;

            while(j<k){
                int s= a[i]+a[j]+a[k];

                if(s==0) {
                    ans.push_back({a[i],a[j],a[k]});
                    j++;k--;

                    while(j<k and a[j]==a[j-1]) j++;
                    while(j<k and a[k]==a[k+1]) k--;
                }else if(s<0) j++;
                else k--;
            }
        }

        return ans;
    }
};