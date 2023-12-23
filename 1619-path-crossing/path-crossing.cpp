class Solution {
public:
    bool isPathCrossing(string a) {
        int x=0,y=0;

        set<pair<int,int>>set;
        set.insert({0,0});

        for(auto v:a){
            if(v=='N') y++;
            else if(v=='W') x--;
            else if(v=='E') x++;
            else y--;

            if(set.find({x,y})!=set.end())
            return true;

            set.insert({x,y});
        }

        return false;
    }
};