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
    TreeNode* removeLeafNodes(TreeNode* root, int t) {
        if(!root) return NULL;

        auto l = removeLeafNodes(root->left,t);
        auto r = removeLeafNodes(root->right,t);

        if(!l and !r){
            root->left=NULL;
            root->right=NULL;
            if(root->val == t) return NULL;
            return root;
        }

        if(!l){
            root->left=NULL;
             return root;}
        
        if(!r){
        root->right=NULL;
        return root;
        }

        return root;
    }
};