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

    TreeNode* ans=nullptr;


    bool f2(TreeNode* root,TreeNode* p){
        if(!root) return 0;
        if(root==p) return 1;

        return f2(root->left,p) or f2(root->right,p);
        
    }


   void f1(TreeNode* root, TreeNode* p, TreeNode* q){
        if(!root) return;

        if(f2(root,p) and f2(root,q)) ans = root;

        f1(root->left,p,q);
        f1(root->right,p,q);

   }



    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
         f1(root,p,q);

         return ans;
    }
};