class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& a) {
        int i,j,c=0,s=0;

        vector<vector<int>>v(a.size(),vector<int>(a[0].size(),0));

        queue<pair<int,pair<int,int>>>q;
        if(a[0][0]==1)return -1;
        else 
        q.push({1,{0,0}});
        v[0][0] =1;

        while(!q.empty()){
            auto l = q.size();
            while(l--){
                auto x = q.front();
                q.pop();
                int d = x.first;
                i=x.second.first;
                j=x.second.second;

                if(i==a.size()-1 and j==a[0].size()-1 )return d;

                int dx[8]={0,0,1,-1,-1,1,1,-1};
                int dy[8]={1,-1,0,0,-1,1,-1,1};

                for(int k=0;k<8;k++){
                    int x1 = i+dx[k];
                    int y1 = j+dy[k];

                    if(x1>=0 and y1>=0 and x1<a.size() and y1<a[0].size() and v[x1][y1]==0 and a[x1][y1]==0){
                        v[x1][y1]=1;
                        q.push({d+1,{x1,y1}});
                    }
                }
                

            }
            c++;

        }

        return -1;
        
    }
};