class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& a, int k) {
        vector<int>ans;
        vector<double>v;
        vector<pair<int,int>>pos;
        unordered_map<double,int>map;

        int c=0;

        int i,j;
        for(i=0;i<a.size();i++){
            for(j=i+1;j<a.size();j++){
                v.push_back((double)((double)a[i]/a[j]));
                pos.push_back({a[i],a[j]});
                map[((double)a[i]/a[j])] = c;
                c++;
            }
        }


        sort(v.begin(),v.end());


        return {pos[map[v[k-1]]].first,pos[map[v[k-1]]].second};

        
      
    }
};