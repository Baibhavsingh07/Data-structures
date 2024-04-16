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

vector<TreeNode*>nr;

    void f(TreeNode* root,int d){
        if(!root) return ;
        if(d<1) return ;

    	if(d==1) {
            nr.push_back(root);
            return;
        }

        f(root->left,d-1);
        f(root->right,d-1);

    }


    TreeNode* addOneRow(TreeNode* root, int val, int d) {
        if(d==1){
            TreeNode* node = new TreeNode(val);
            node->left=root;
            return node;
        }


        f(root,d-1);

        for(auto x:nr){

        TreeNode* node1 = new TreeNode(val);
        TreeNode* node2 = new TreeNode(val);


        if(x->left) node1->left=x->left;
        if(x->right) node2->right=x->right;

        x->left=node1;
        x->right=node2;

        }

        return root;



    }
};