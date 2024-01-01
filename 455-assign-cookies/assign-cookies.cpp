class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
       
        int i=0,j=0,k,c=0,m=0;
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        

        while(i<g.size() and j<s.size()){
            if(s[j]>=g[i]){
                c++;
                i+=1;
                j+=1;
            }
            else{
            j++;
            }
        }
        return c;
        
    }
};