class Solution {
public:
    int numSubarraysWithSum(vector<int>& a, int goal) {
        int i,j,c=0;
        
        for(i=1;i<a.size();i++)
            a[i] = a[i] + a[i-1];
        
        unordered_map<int,int>map;

        for(i=0;i<a.size();i++){
            if(a[i]==goal)c++;

            if(map.find(a[i]-goal)!=map.end()){
                c+=map[a[i]-goal];
            }

            map[a[i]]++;
        }

        return c;

        return c;
    }
};