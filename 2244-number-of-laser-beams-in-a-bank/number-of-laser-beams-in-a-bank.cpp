class Solution {
public:
    int numberOfBeams(vector<string>& a) {
        int i,j,k,c=0,s=0,prev=0;

        vector<int>ones;

        for(i=0;i<a.size();i++){
            c=0;
            for(auto x:a[i])
            if(x=='1')
            c++;

            ones.push_back(c);
    
        }

        for(i=0;i<ones.size();){
            j=i+1;
            while(j<ones.size() and ones[j]==0)
            j++;
            
            if(j<a.size())
            s+=ones[i]*ones[j];

            i=j;
        }

        return s;
    }
};