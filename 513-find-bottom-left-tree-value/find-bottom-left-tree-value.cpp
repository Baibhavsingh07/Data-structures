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
    int findBottomLeftValue(TreeNode* root) {
        queue<TreeNode*>q;

        q.push(root);

        int ans = root->val;
        while(!q.empty()){
            int s = q.size();

            while(s--){
                auto x = q.front();
                q.pop();

                ans = x->val;
                if(x->right) q.push(x->right);
                if(x->left) q.push(x->left);
            }
        }

        return ans;
    }
};