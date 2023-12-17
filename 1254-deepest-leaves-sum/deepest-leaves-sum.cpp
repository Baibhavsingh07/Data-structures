/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
int max_lvl = INT_MIN;
int ans=0;
    void solve(TreeNode* root,int l){
        if(!root)
        return ;

        if(l==max_lvl){
            ans+=root->val;
        }

         if(l>max_lvl){
            max_lvl=l;
            ans=root->val;
        }

        

        solve(root->left,l+1);
        
        solve(root->right,l+1);

       

    }


    int deepestLeavesSum(TreeNode* root) {
        solve(root,0);
        return ans;
    }
};