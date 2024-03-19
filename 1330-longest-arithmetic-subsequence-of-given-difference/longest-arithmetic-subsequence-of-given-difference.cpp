class Solution {
public:
vector<int>next;
vector<int>tbl;

    int f(int i,vector<int>& a){
        if(i>=a.size()) return 0;

        int l=0,r=0;

        if(tbl[i]!=-1) return tbl[i];

       
        
        r = 1 + f(next[i],a);
        

        return tbl[i] = max(l,r);

    }

    int longestSubsequence(vector<int>& a, int d) {
        int n=a.size();
        next.resize(n,n);

        unordered_map<int,int>map;

        for(int i=n-1;i>=0;i--){
            int tofind = a[i] + d;
            if(map.find(tofind)!=map.end()){
                next[i]=  map[tofind];
            }

            map[a[i]]=i;
        }

int ans=0;


        tbl.resize(a.size()+1,-1);

        for(int i=0;i<a.size();i++)
        ans = max(ans, f(i,a));

        return ans;
    }
};