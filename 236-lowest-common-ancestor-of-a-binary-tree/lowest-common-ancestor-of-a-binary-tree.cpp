/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:

    int find(TreeNode* root, TreeNode* p){
        if(!root) return 0;
        if(root==p) return 1;

        return find(root->left,p) or find(root->right,p);
        
    }

    TreeNode* f(TreeNode* root,TreeNode* p,TreeNode* q){
        if(!root) return nullptr;

        if(root==p or root==q or (find(root->left,p) and find(root->right,q)) or  (find(root->left,q) and find(root->right,p) )) {
            return root;
        }

        auto l = f(root->left,p,q);
        auto r = f(root->right,p,q);

        if(l) return l;
        return r;
    }

    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        return f(root,p,q);
    }
};