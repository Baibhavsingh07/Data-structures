class Solution {
public:
    int findDuplicate(vector<int>& a) {
        int i=1,j,c=0;

        for(i=0;i<a.size();i++){
            while(a[i]!=i+1){
                if(a[a[i]-1]==a[i]) return a[i];
                swap(a[i],a[a[i]-1]);
            }
        }

        return a[a.size()-1];
        
    }
};