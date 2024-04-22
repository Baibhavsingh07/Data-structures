class Solution {
public:
    int longestPalindrome(vector<string>& a) {
        int i,j,c=0,s=0;

        unordered_map<string,int>map;

        for(i=0;i<a.size();i++){
            string x = a[i];
            reverse(x.begin(),x.end());
            if(map.find(x)!=map.end()){
                if(map[x]==1)map.erase(x);
                else map[x]--;

                c+=4;
            }else{
                map[a[i]]++;
            }
            
        }

        int m=0;

        for(auto x:map){
            if((x.first)[0]==(x.first)[1]) {
                m=max(m,x.second);
            }
        }

        return c+m*2;
    }
};