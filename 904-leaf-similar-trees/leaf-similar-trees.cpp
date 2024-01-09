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
    

    void f(TreeNode* root,vector<int>&v){
        if(!root) return ;
        if(!root->left and !root->right){
            v.push_back(root->val);
        }
        f(root->left,v);
        f(root->right,v);
    }

    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int>v1,v2;

        f(root1,v1);
        f(root2,v2);

        if(v1.size()!=v2.size()) return 0;

        for(int i=0;i<v1.size();i++)
        if(v1[i]!=v2[i]) return 0;

        return 1;
    }
};