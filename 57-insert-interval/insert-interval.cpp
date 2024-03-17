class Solution {
public:

    // vector<vector<int>> merge(vector<vector<int>>&a,int i){
    //     int j,c=0;



    //     for(j=i+1;j<a.size();j++){
    //         if()
    //     }

    // }


    vector<vector<int>> insert(vector<vector<int>>& a, vector<int>& b) {
        vector<vector<int>>ans;
        int i,j,c=0;

        int st=0,end=0;

        a.push_back(b);

        for(i=0;i<a.size();i++){
            if(a[i][0] > b[0]){
                a.insert(a.begin()+i,b); break;
            }else if(a[i][0]==b[0] and a[i][1] > b[1]){
                a.insert(a.begin()+i,b); break;

            }
        }

        for(i=0;i<a.size();i++){
            st = a[i][0];
            end = a[i][1];

            for(j=i+1;j<a.size();j++){
                if(a[j][0] <= end){
                    end = max(end,a[j][1]);

                }else{
                    break;
                }
            }

            i=j;
            i--;
            ans.push_back({st,end});
        }

        return ans;

        // return a;

    }
};

// class Solution {
// public:

//     // vector<vector<int>> merge(vector<vector<int>>&a,int i){
//     //     int j,c=0;



//     //     for(j=i+1;j<a.size();j++){
//     //         if()
//     //     }

//     // }


//     vector<vector<int>> insert(vector<vector<int>>& a, vector<int>& b) {
//         vector<vector<int>>ans;
//         int i,j,c=0;

//         int st=0,end=0;

//         for(i=0;i<a.size();i++){
//             if(b[0] <= a[i][1] and b[0]>=a[i][0]){
//                 a[i][1]=max(a[i][1],b[1]);
//                 b[0]=a[i][0];
//                 b[1] = a[i][1];
//                 continue;
//             }else if(b[1] < a[i][0]){
//                 ans.push_back(b);
//                 break;
//             }
//             ans.push_back(a[i]);
//         }

//         for(;i<a.size();i++) ans.push_back(a[i]);

//        return ans;

//         // return a;

//     }
// };