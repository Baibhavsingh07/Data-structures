class Solution {
public:
    int longestConsecutive(vector<int>& v) {
        unordered_set<int>set(v.begin(),v.end());

        vector<int>a;
        for(auto x:set) a.push_back(x);
        sort(a.begin(),a.end());
        int ans=0;

        if(a.size() <=1) return a.size();

        int i,j,c=0;
        for(i=0;i<a.size()-1;i++){
            j=i;
            while( j+1 <a.size() and  a[j]+1 == a[j+1]){
                j++;
            }

            ans=max(ans,j-i+1);

            i=j;
        }

        return ans;
    }
};