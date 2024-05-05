/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode* curr = NULL;
        while(node and node->next){
            node->val = node->next->val;
            curr=node;
            node=node->next;
         }

         curr->next=NULL;

    }
};