class Solution {
public:
    int findMaxLength(vector<int>& a) {
        int i,j,k,c=0;
        for(i=0;i<a.size();i++){
            if(a[i]==0)
            a[i]=-1;
        }
        for(i=1;i<a.size();i++){
            a[i]=a[i]+a[i-1];
        }


        unordered_map<int,int>map;
        map[0]=-1;
        for(i=0;i<a.size();i++){
            int need=a[i];
            if(map.find(need)!=map.end()){
                j=map[need];
                c=max(c,i-j);
            }
            else
            map[a[i]]=i;
        }
        return c;
        
    }
};