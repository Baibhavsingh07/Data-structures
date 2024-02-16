class Solution {
public:

    struct valcomp{
        bool operator()(pair<int,int>&a,pair<int,int>&b){
            return a.second<b.second;
        }
    };

    int findLeastNumOfUniqueInts(vector<int>& a, int k) {
        map<int,int>map;

        for(auto x:a) map[x]++;

        vector<pair<int,int>>v;

        for(auto x:map)
        v.push_back({x.first,x.second});

        sort(v.begin(),v.end(),valcomp());

        // for(auto x:v)

       int  i=0;
        while(k>0 and i<v.size()){
            k=k - v[i].second;
            i++;
        }

        if(k<0) return v.size()-i+1;

        return v.size()-i;

        return 0;

    }
};