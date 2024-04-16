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

int val;

    void f(TreeNode* root,int d){
        if(!root) return ;
        if(d<1) return ;

    	if(d==1) {
            TreeNode* node1 = new TreeNode(val);
            TreeNode* node2 = new TreeNode(val);


            if(root->left) node1->left=root->left;
            if(root->right) node2->right=root->right;

            root->left=node1;
            root->right=node2;
            return;
        }

        f(root->left,d-1);
        f(root->right,d-1);

    }


    TreeNode* addOneRow(TreeNode* root, int v, int d) {
        if(d==1){
            TreeNode* node = new TreeNode(v);
            node->left=root;
            return node;
        }

        val=v;


        f(root,d-1);

        return root;



    }
};