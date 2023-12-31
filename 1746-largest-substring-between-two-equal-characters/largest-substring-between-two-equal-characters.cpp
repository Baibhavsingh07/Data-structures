class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        int i,j,c=-1;

        unordered_map<char,int>map;

        for(i=0;i<s.size();i++){
            if(map.find(s[i])==map.end())
            map[s[i]]=i;
            else{
                int x = map[s[i]];
                c = max(c,i-x-1);
            }
        }

        return c;
    }
};