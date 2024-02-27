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
int d=0;

    int solve(TreeNode* root){
        if(!root)
        return 0;
        if(!root->left and !root->right)
        return 1;
        int rs=0;
        int ls=0;

        ls=solve(root->left);
        rs=solve(root->right);

        d=max(d,ls+rs);
     
        return max(ls,rs)+1;


    }

    int diameterOfBinaryTree(TreeNode* root) {
        int x=solve(root);
        return d;
        
        
    }
};