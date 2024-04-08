class Solution {
public:
    string gcdOfStrings(string a, string b) {
        int i=0,j=0,c=0;
        int n=b.size();

        if(a.size()<b.size()){
            auto v = a;
            a=b;
            b=v;
        }

        string ans="";
        string s;

        for(i=0;i<b.size();i++){
            
            s+=b[i];

            int l = s.size();
            int k=0;
            c=0;
            int x=0;

            for(j=0;j<b.size();j++){
                if(b[j]!=s[k]) {x=1;break;}
                k=(k+1)%l;
            }

            if(x==1) continue;
            if(k!=0) continue;


            for(j=0;j<a.size();j++){
                if(a[j]!=s[k]) {c=1;break;}
                k=(k+1)%l;
            }

            if(c==0 and k==0) ans=s;

        }

        return ans;
    }
};