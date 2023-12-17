class Solution {
public:
    string destCity(vector<vector<string>>& a) {
        vector<string>ans;
        int i,j,c=0;
        map<string,int>map;

        for(auto x:a){
        map[x[1]]++;
        map[x[0]]++;

        }

        for(auto x:map){
            if((x.second)%2 ==1)
            ans.push_back(x.first);
        }

        for(auto x:ans){
            for(auto y:a){
                if(y[1]==x)
                return x;
            }
        }

        return "";

    }
};