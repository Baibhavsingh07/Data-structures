class Solution {
    private:
    int search(vector<int>a,int t){
        for(int i=0;i<a.size();i++)
        if(a[i]==t) return i;

        return -1;
    }
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // vector<int>ans;

        // for(int i=0;i<nums.size();i++){
        //     for(int j=i+1;j<nums.size();j++)
        //     if(nums[i]+nums[j]==target) return {i,j};

        // }
        // return ans;

        for(int i=0;i<nums.size();i++){
            int j = search(nums,target-nums[i]);

            if(j!=-1 and i!=j) return {i,j};
        }

        return {-1,-1};
        
    }
};