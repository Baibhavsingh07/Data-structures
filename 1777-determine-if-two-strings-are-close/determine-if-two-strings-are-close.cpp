class Solution {
public:
    bool closeStrings(string a, string b) {

        if(a.size()!=b.size()) return 0;

        map<int,vector<char>>map1;
        unordered_map<char,int>aux;
        for(auto x:a)
        aux[x]++;

        for(auto x:aux){
            map1[x.second].push_back(x.first);
        }

        map<int,vector<char>>map2;
        unordered_map<char,int>aux2;

        for(auto x:b)
        aux2[x]++;

        for(auto x:aux2){
            map2[x.second].push_back(x.first);
        }

        for(auto x:aux){
            if(aux2.find(x.first)==aux2.end()) return 0;
            else if(aux2[x.first]==1) aux2.erase(x.first);
            else aux2[x.first]--;
        }

        for(auto x:map1){
            if(map2.find(x.first)==map2.end()) return 0;
            else if(map2[x.first].size()!=x.second.size()) return 0;
            
        }



        return 1;

        
    }
};