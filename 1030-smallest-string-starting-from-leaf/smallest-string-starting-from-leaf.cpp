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

    vector<string>ans;

    void f(TreeNode* root,string curr){
        if(!root){
            reverse(curr.begin(),curr.end());
            ans.push_back(curr);
            return;
        }

        curr+=('a' + root->val);

        if(!root->left and !root->right){
            reverse(curr.begin(),curr.end());
            ans.push_back(curr);
            return;
        }
        if(root->left)
        f(root->left,curr);

        if(root->right)
        f(root->right,curr);

        curr.pop_back();

    }


    string smallestFromLeaf(TreeNode* root) {
        string s="";
        f(root,s);

        sort(ans.begin(),ans.end());

        for(auto x:ans)cout<<x<<endl;

        return ans[0];
    }
};