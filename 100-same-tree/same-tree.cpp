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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(!p and !q)
        return 1;
        else if(!p or !q)
        return 0;
        else if (p->val==q->val){
            int c= isSameTree(p->left,q->left);
            int s=  isSameTree(p->right,q->right);
           return c and s;

        }
        else
return 0;
    }
};