class Solution {
public:
    int minSteps(string s, string t) {
        // unordered_map<char,int>map;
        vector<int>map(27);
        for(auto x:s)
        map[x-'a']++;

        int c=0;

        for(auto x:t){
            if(map[x-'a']==0) c++;
            else{
                 map[x-'a']--;
            }
        }
        return c;
    }
};