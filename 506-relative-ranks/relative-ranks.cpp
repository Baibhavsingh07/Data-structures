class Solution {
    struct comp{
        char operator()(pair<int,int>&x,pair<int,int> &y)
        {
            return y.second>x.second;
        }
    };
public:
    vector<string> findRelativeRanks(vector<int>& a) {
        int i,j,k,c=0;
    int n=a.size();
        priority_queue<pair<int,int>,vector<pair<int,int>>,comp> pq;
        for(i=0;i<a.size();i++)
        {
            pq.push({i,a[i]});
        }
    

        pair<int,int> p;
        vector<string> v(n);

        
        
        c=1;
        while(!pq.empty())
        {
            if(c==1)
            {
                p=pq.top();
                v[p.first]="Gold Medal";
                 pq.pop();
                cout<<p.first<<","<<"Gold Medal";
                c++;

            }
            else if(c==2)
            {
                 p=pq.top();
                v[p.first]="Silver Medal";
                cout<<p.first<<","<<"Gold Medal";
                pq.pop();
                c++;
            }
            else if(c==3)
            {
                 p=pq.top();
                v[p.first]="Bronze Medal";
                cout<<p.first<<","<<"Gold Medal";
                 pq.pop();
                c++;
            }
            else{
                 p=pq.top();
                v[p.first]=to_string(c++);
                cout<<p.first<<","<<c;

                pq.pop();
            }
        }

        return v;
    }
};