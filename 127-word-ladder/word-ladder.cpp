class Solution {
public:
    int ladderLength(string bg, string eg, vector<string>& w) {
        queue<pair<string,int>>q;

        q.push({bg,1});

        set<string>set;

        for(auto x:w) set.insert(x);

        if(set.find(eg)==set.end()) return 0;

        while(!q.empty()){
            auto curr = q.front().first;
            auto dis = q.front().second;
            
            q.pop();

            

            if(curr==eg) return dis;

            for(int i=0;i<curr.size();i++){
                for(int j=0;j<27;j++){
                    if(curr[i]!='a'+j){
                        char u = curr[i];
                        curr[i]='a'+j;
                        if(set.find(curr)!=set.end()){
                            q.push({curr,dis+1});
                            set.erase(curr);
                        }

                        curr[i]=u;
                    }
                }
            }

        }
            return 0;

    }
};