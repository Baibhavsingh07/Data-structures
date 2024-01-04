class Solution {
public:
    int minOperations(vector<int>& a) {
        int c=0;
        unordered_map<int,int>map;
        for(auto x:a)
        map[x]++;

        for(auto x:map){
            int f = x.second;
            if(f==1 ) return -1;
            int rem = f%3;
           
            int t=0,th=0; 
            t=rem;
            th=f/3;
            if(rem==1){
            t+=3;
            th-=1;
            }
            
            c=c+t/2+th;
        }

        return c;
    }
};