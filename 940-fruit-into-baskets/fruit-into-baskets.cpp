class Solution {
public:
    int totalFruit(vector<int>& a) {
        unordered_map<int,int>map;
        int l=0,r=0,i,c=0,ans=1;
        int n=a.size();

        while(r<n){
            while( r<n and  map.size()<=2){
                if(map.find(a[r])==map.end() and map.size()==2) break;
                else map[a[r]]++;
                r++;
            }
            if(r==n) break;
            map[a[r]]++;

            ans=max(ans,r-l);

            while(l<r and map.size()>2){
                if(map[a[l]]==1) map.erase(a[l]);
                else map[a[l]]--;
                l++;
            }
            r++;
        }

        return max(ans,r-l);
    }
};