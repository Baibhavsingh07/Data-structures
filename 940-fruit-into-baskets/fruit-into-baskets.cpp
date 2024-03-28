class Solution {
public:
    int totalFruit(vector<int>& a) {
        unordered_map<int,int>map;
        int l=0,r=0,i,c=0,ans=1;
        int n=a.size();

        map[a[0]]=1;

        while(r+1<n){
            while( r+1<n and  map.size()<=2){
                if(map.find(a[r+1])==map.end() and map.size()==2) break;
                else map[a[r+1]]++;
                r++;
            }
            ans=max(ans,r-l+1);

            if(r+1==n) break;

            map[a[r+1]]++;


            while( map.size()>2){
                if(map[a[l]]==1) map.erase(a[l]);
                else map[a[l]]--;
                l++;
            }
            r++;
        }

        return ans;
    }
};