class Solution {
public:
    int compareVersion(string a, string b) {
        int i,j,c=0,s=0;

        vector<int>x;
        vector<int>y;



        for(i=0;i<a.size();i++){
            string v;
            j=i;
            while( j<a.size() and a[j]!='.') v+=a[j++];

            i=j;
            x.push_back(stoi(v));
        }

        for(i=0;i<b.size();i++){
            string v;
            j=i;
            while( j<b.size() and b[j]!='.') v+=b[j++];

            i=j;
            y.push_back(stoi(v));
        }

        // for(auto v:x) cout<<v<<" ";
        // cout<<endl;
        // for(auto v:y) cout<<v<<" ";
        // cout<<endl;

        i=0;j=0;
        while(i<x.size() and j<y.size()){
            if(x[i]>y[j]) return 1;
            else if(x[i]<y[j]) return -1;
            i++;
            j++;
        }

        while(i<x.size() and x[i]==0) i++;
        while(j<y.size() and y[j]==0) j++;

        if(i<x.size()) return 1;
        if(j<y.size()) return -1;
        return 0;

        return 1;
    }
};