class Solution {
public:
    
    struct comp{
        bool operator()(string a,string b){
            int i=0;

            string l1,l2;

            while( a.size() >0 and  a.back()!=' '){l1+=a.back();a.pop_back();}
            while(b.size() >0 and b.back()!=' '){l2+=b.back();b.pop_back();}

            reverse(l1.begin(),l1.end());
            reverse(l2.begin(),l2.end());


            for( i=0;i<a.size();i++){
                if(a[i]<b[i]) return 1;
                else if(a[i]>b[i]) return 0;
            }
            if(i<b.size()) return 1;
            
            return l1<l2;
        }  
    };
    

    
    vector<string> reorderLogFiles(vector<string>& a) {
        int i,j,c=0,s=0;
        
        vector<string>l,d,ans;
        
        for(auto x:a){
            if(x.back() >=48 and x.back() <=57 ) d.push_back(x);
            else l.push_back(x);
        }
        
        map<string,string>map;
        
        vector<string>aa;
        
        for(auto x:l){
            string v;
            int i=0;
            string ss;
            for(i=0;i<x.size() and x[i]!=' ';i++) ss+=x[i];
            
            i++;
            
            for(;i<x.size();i++) v+=x[i];

            v+=' ';
            
            for(auto x:ss) v+=x;
            
            cout<<v<<"      ";
            
            map[v]=x;
            aa.push_back(v);
            
        }
        
        sort(aa.begin(),aa.end(),comp());
        
        for(auto x:aa){
            ans.push_back(map[x]);
        }
        
        for(auto x:d) ans.push_back(x);
        return ans;
        
        
    }
};