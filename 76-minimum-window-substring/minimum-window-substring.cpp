class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char,int> m;
        int n=s.size();
        unordered_map<char,int> window;
        int i,j,k,c=0,des=0,req=0;
        int ans[3]={-1,0,0};
        int l=0,r=0;
        i=0;
        j=0;

        if(s.size()==0 || t.size()==0)
        return "";

        for(auto v:t)
        {
            m[v]++;
            
            
        }

        req=m.size();
        

        while(j<n)
        {
            window[s[j]]++;
            if(m.find(s[j])!=m.end() and window[s[j]]==m[s[j]] )
            {
                des++;
            }

            
            
            while(des==req and i<=j)
            {
               
                 if(ans[0]>j-i+1 || ans[0]==-1)
                    {
                        ans[0]=j-i+1;
                        l=i;
                        r=j;
                        ans[1]=i;
                        ans[2]=j;
                    
                
                }
                
                
                window[s[i]]--;
                if(m.find(s[i])!=m.end() and m[s[i]]>window[s[i]])
                {
                    des--;
                    
                }
                

                i++;

            }
            j++;



        }
        string a="";
        if(ans[0]==-1)
        return a;
        
        for(i=l;i<=r;i++)
        {
            a+=s[i];
        }
        return a;

       
        
    }
};