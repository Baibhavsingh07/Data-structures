class Solution {
public:

    int ans=0;

    void f(int i,vector<string>& w, unordered_map<char,int>&map, vector<int>& s,int x){
        if(i==w.size()){
            ans=max(ans,x);
            return;
        }

        f(i+1,w,map,s,x);

        auto vv=map;

        int c=0;
        int v=0;
        for(auto x:w[i]){
            if(map.find(x)==map.end()){
                c=1;
                break;
            }else{
                map[x]--;
                v+=s[x-'a'];
                if(map[x]==0)map.erase(x);
            }
        }

        if(c==1) {
            map=vv;
            return ;
        }

         f(i+1,w,map,s,x+v);

        map=vv;

    }

    int maxScoreWords(vector<string>& w, vector<char>& l, vector<int>& s) {
        int i,j,c=0,k=0;

        unordered_map<char,int>map;
        for(auto x:l)map[x]++;

         f(0,w,map,s,0);
        return ans;
        
    }
};