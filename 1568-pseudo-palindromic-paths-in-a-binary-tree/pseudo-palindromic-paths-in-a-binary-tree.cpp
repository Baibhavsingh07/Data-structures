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

int ans=0;

    void f(TreeNode* root,unordered_map<int,int>curr){
        if(!root){ 
            return ;
        }

        if(!root->left and !root->right){
            curr[root->val]++;
            

            int c=0;

            for(auto v:curr){
                if(v.second%2==1)
                c++;

            }
            if(c<=1)
            ans++;

            curr[root->val]--;

            return ;
        }
        
        curr[root->val]++;
        f(root->left,curr);
        f(root->right,curr);
        curr[root->val]--;
        

    }

    int pseudoPalindromicPaths (TreeNode* root) {

        if(!root) return 0;
        unordered_map<int,int>curr;

        f(root,curr);

        // for(auto x:a)
        // for(auto y:x)
        // cout<<y;

        

        return ans;

        return 0;
    }
};