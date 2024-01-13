class Solution {
public:
    int minSteps(string s, string t) {
        unordered_map<char,int>map;
        for(auto x:s)
        map[x]++;

        int c=0;

        for(auto x:t){
            if(map.find(x)==map.end()) c++;
            else{
                if(map[x]==1) map.erase(x);
                else map[x]--;
            }
        }
        return c;
    }
};