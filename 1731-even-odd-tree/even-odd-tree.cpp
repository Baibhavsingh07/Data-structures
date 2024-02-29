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
    bool isEvenOddTree(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);
        int c=-1;

        while(!q.empty()){
            auto l = q.size();

            vector<int>a;
            c++;

            while(l--){
                auto x = q.front();
                q.pop();
                

                a.push_back(x->val);

                if(x->left)q.push(x->left);
                if(x->right)q.push(x->right);
            }

            if(c%2==1)c=1;
            else c=0;

            int prev=-1;

            if(c==0){
                for(auto x:a){
                    if(x%2==0 or ( x<=prev and prev!=-1)) return 0;

                    prev=x;
                }
            }else{
                for(auto x:a){
                    if(x%2==1 or ( x>=prev and prev!=-1)) return 0;

                    prev=x;
                }
            }

        


        }
    return 1;
    }
};