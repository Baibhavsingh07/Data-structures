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
int c=0;

    int  solve(TreeNode*root ){
        if(!root)
        return 0;

        int ls=solve(root->left);
        int rs=solve(root->right);
        c+=abs(ls)+abs(rs);
        return root->val+ls+rs-1;
    }

    int distributeCoins(TreeNode* root) {
        solve(root);
        return c;
        
        
    }
};