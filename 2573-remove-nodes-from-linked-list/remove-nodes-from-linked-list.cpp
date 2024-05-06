/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

void rev(ListNode* &head){
    ListNode* curr=head,*prev=NULL,*nxt=NULL ;

    while(curr){
        nxt=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nxt;
    }

    head=prev;
}

class Solution {
public:
    ListNode* removeNodes(ListNode* head) {
        auto t1=head,t2=head;

        ListNode* h = new ListNode(-1);
        t1 = h;

        rev(head);

        int m = INT_MIN;

        for(auto t=head;t!=NULL;){
            if(t->val >=m){
                m=t->val;
                t1->next=t;
                t1=t;
            }
            t=t->next;
            t1->next=NULL;
        }
        rev(h->next);
        return h->next;
    }
};