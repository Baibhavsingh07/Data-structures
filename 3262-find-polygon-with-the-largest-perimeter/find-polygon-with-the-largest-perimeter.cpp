class Solution {
public:
    long long largestPerimeter(vector<int>& a) {
        long long i,j,k,c=0,s=0;
            
        sort(a.begin(),a.end());
        vector<long long>v;
        for(auto x:a)
            v.push_back(x);
        
        for(i=1;i<v.size();i++){
            v[i]=v[i]+v[i-1];
        }
        
        for(auto x:v)
            cout<<x<<" ";
        cout<<endl;
        
        for(i=a.size()-1;i>=2;i--){
            if(v[i-1]>a[i])
            {
                return v[i-1]+a[i];
            }
        }
        
        
        
        
        return -1;
        
    }
};