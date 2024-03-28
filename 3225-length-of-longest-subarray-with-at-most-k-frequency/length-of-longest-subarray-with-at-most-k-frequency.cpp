class Solution {
public:
    int maxSubarrayLength(vector<int>& a, int k) {
        int l=0,r=0,i,j,s=0,c=0;

        unordered_map<int,int>map;

        while(r<a.size()){
            while( r<a.size() and (map.find(a[r])==map.end() or map[a[r]]<k)){
                map[a[r]]++;
                r++;
            }
            s = max(s,r-l);

            if(r==a.size()){
                break;
            }

            map[a[r]]++;

            while( l<r and map[a[r]]>k){
                map[a[l]]--;
                l++;
            }
            r++;
        }

        return s;
    }
};