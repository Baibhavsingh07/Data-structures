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

int ans=INT_MIN;

    void solve(TreeNode* root,int maxi,int mini){
        if(!root)
        return;
        maxi=max(maxi,root->val);
        mini=min(mini,root->val);
        ans=max(ans,maxi-mini);
        solve(root->left,maxi,mini);
        solve(root->right,maxi,mini);

    }

    int maxAncestorDiff(TreeNode* root) {
        if(!root)
        return 0;

        int maxi=root->val;
        int mini=root->val;
        int diff=0;
        solve(root,maxi,mini);
        return ans;
    }
};