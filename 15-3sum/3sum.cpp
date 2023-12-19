class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& a)
     {
            int i,j,k,s=0,c=0;
            int n=a.size();
            vector<vector<int>> v;

            if(n<3)
            return v;
            sort(a.begin(),a.end());
            i=0;
            j=0;
            
            map<vector<int>,int> se;

            for(i=0;i<n;i++)
            {
                int low=i+1;
                int high=n-1;
                while(high>low)
                {
                    s=a[i]+a[low]+a[high];
                    if(s==0)
                    {
                        se[{a[i],a[low],a[high]}]++;
                        

                        low++;
                        high--;
                        
                    }
                    else if(s>0)
                    high--;
                    else
                    low++;
                }
            }


            

            for(auto val: se)
            {
                v.push_back(val.first);
            }
            
            return v;

    }
};