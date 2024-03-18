class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& a) {
        vector<int>ans;
        int c=0;

        sort(a.begin(),a.end());

        if(a.empty()) return 0;

        for(int i=0;i<a.size();i++){
            if(ans.empty()){
                ans.push_back(a[i][0]);
                ans.push_back(a[i][1]);
                c++;
                continue;
            }

            int l = ans[0];
            int r = ans[1];

            if(a[i][0] <= r){
                ans[0]= min(ans[0],a[i][0]);
                ans[1]= min(ans[1],a[i][1]);
            }else{
                ans.pop_back();
                ans.pop_back();
                i--;
            }
        }

        return c;

        
    
    }
};


// class Solution {
// public:
//     int findMinArrowShots(vector<vector<int>>& a) {
//         vector<vector<int>>ans;

//         sort(a.begin(),a.end());
//         for(auto x:a)cout<<x[0]<<" "<<x[1]<<endl;

//         for(int i=0;i<a.size();i++){
//             if(ans.empty() or ans.back()[1] < a[i][0]){
//                 ans.push_back(a[i]);
//                 continue;
//             }

//             if(ans.back()[1] >= a[i][0] and ans.back()[0] < a[i][0]){
//                 ans.back()[1] = min(ans.back()[1],a[i][0]);
//             }
//         }
//         return ans.size();
//     }
// };