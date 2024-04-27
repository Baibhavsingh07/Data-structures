class Solution {
public:

int x;

vector<vector<int>>tbl;
map<char,vector<int>>map;

    int f(int i,int j,int n,string &ring, string &key){
        if(j==key.size()) return 0;
        if(n<0) return INT_MAX/2;

        string s = to_string(i)+'-'+to_string(j)+'-'+to_string(n);

        if(tbl[i][j]!=-1) return tbl[i][j];

        int ans=INT_MAX;
        if(ring[i]==key[j]){
            ans=1 + f(i,j+1,ring.size()/2,ring,key);
        }else{
            auto vec = map[key[j]];

            for(auto val:vec){
                int d = min(abs(val-i),x-abs(val-i));

                ans = min(ans,d+f(val,j,n,ring ,key));
            }
        }

        return tbl[i][j] =ans;
    }

    int findRotateSteps(string ring, string key) {
        x=ring.size();

        tbl.resize(101,vector<int>(101,-1));

        for(int i=0;i<ring.size();i++)map[ring[i]].push_back(i);

        return f(0,0,ring.size(),ring,key);
    }
};