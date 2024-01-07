class Solution {
public:

    int f(int i,vector<int>&a,int started,vector<vector<int>>&tbl){
        if(i==a.size() and started==1) return 0;
        if(i==a.size() and started==0) return INT_MIN;

        if(tbl[i][started]!=INT_MAX) return tbl[i][started];


        if(started==0){
            int l=f( i+1,a,0,tbl);
            int r = a[i]+f(i+1,a,1,tbl);
            return tbl[i][started]=max(l,r);
        }else{
            int l =f(a.size(),a,1,tbl);
            int r =a[i]+f(i+1,a,1,tbl);
            return tbl[i][started]=max(l,r);

        }
        
    }


    int maxSubArray(vector<int>& a) {
        int n=a.size();

        int i,j,k,c=0,m=INT_MIN;
        int started = 0;
        vector<vector<int>>tbl(a.size()+1,vector<int>(2,INT_MIN));

        for(i=0;i<=a.size();i++) tbl[i][1]=0;

        for(i=a.size()-1;i>=0;i--){

            int l=tbl[i+1][0];
            int r = a[i]+tbl[i+1][1];
            tbl[i][0]=max(l,r);

             l =tbl[a.size()][1];
             r =a[i]+tbl[i+1][1];
            tbl[i][1]=max(l,r);

        }

        return tbl[0][0];       

        
    }
};





// class Solution {
// public:
//     int maxSubArray(vector<int>& a) {
//         int n=a.size();

//         int i,j,k,c=0,m=INT_MIN;
//         for(i=0;i<n;i++){
//             int c=0;
//             for(j=i;j<n;j++){
//                 c+=a[j];
//                 m=max(m,c);
//             }
//         }
//         return m;
//     }
// };


// class Solution {
// public:
//     int maxSubArray(vector<int>& a) {
//         int n=a.size();

//         int i,j,k,c=0,m=INT_MIN;

//         vector<long long>prefix(n,0);
//         prefix[0]=a[0];

//         for(i=1;i<n;i++){
//             prefix[i]=prefix[i-1]+a[i];
//         }

//         for(i=0;i<n;i++){
//             int c=0;
//             for(j=i;j<n;j++){
//                 if(i==0)
//                 c=prefix[j];
//                 else
//                 c=prefix[j]-prefix[i-1];
//                 m=max(m,c);
//             }
//         }
//         return m;
//     }
// };


// class Solution {
// public:
//     int maxSubArray(vector<int>& a) {
//         int n=a.size();

//         int i,j,k,c=0,m=INT_MIN;

        

//         int lowestPoint=0,ps=0;

//         for(i=0;i<n;i++){
//             ps+=a[i];
//             m=max(m,ps-lowestPoint);
//             if(ps<lowestPoint) lowestPoint=ps;
//         }

//         return m;
//     }
// };




//     int f2(int i,int mid,int j,vector<int>&a){
//         int suf = a[mid];
//         int sum = a[mid];

//         for(int k=mid-1;k>=i;k--){
//             sum+=a[k];
//             suf = max(suf,sum);
//         }

//         int pre = a[mid+1];
//          sum = a[mid+1];

//         for(int k=mid+2;k<=j;k++){
//             sum+=a[k];
//             pre = max(pre,sum);
//         }

//         return suf+pre;
//     }

//     int f(int i,int j,vector<int>&a){
//         if(i==j)
//         return a[i];
//         int mid = (i+j)/2;
//         int left = f(i,mid,a);
//         int right = f(mid+1,j,a);

//         int answer = max(left,right);

//         return max(answer,f2(i,mid,j,a));
//     }

//     int maxSubArray(vector<int>& a) {
//         int n=a.size();

//         int i,j,k,c=0,m=INT_MIN;

//         return f(0,n-1,a);       

        
//     }
// };