class Solution {
public:
    int timeRequiredToBuy(vector<int>& a, int k) {
        int i,j,c=0,ans=0;

        int lb=0,la=0;

        // for(i=0;i<k;i++) if(a[i]<a[k]) lb++;
        // for(i=k+1;i<a.size();i++) if(a[i]<a[k]) la++;

        queue<pair<int,int>>q;

        for(i=0;i<a.size();i++) if(i==k) q.push({a[i],1});
                                else q.push({a[i],0});

        while(!q.empty()){
            auto x = q.front();
            q.pop();

            c++;

            if(x.second==1 and x.first==1) return c;



            if(x.first!=1) q.push({x.first-1,x.second});
        }

        return c;




        
    }
};