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
int ml=0;

    void f(TreeNode* root,int &ans,int m){
        if(!root)return;

        if(ml<=m){
        ans = root->val;
        ml=m;
        }

        f(root->right,ans,m+1);
        f(root->left,ans,m+1);
    }

    int findBottomLeftValue(TreeNode* root) {
        int x=-1;
        f(root,x,0);
        return x;
    }
};