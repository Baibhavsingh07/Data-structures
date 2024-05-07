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
class Solution {
public:

    void rev(ListNode* &head){
        ListNode* curr=head,*prev=NULL,*nxt;

        while(curr){
            nxt = curr->next;
            curr->next=prev;
            prev=curr;
            curr=nxt;
        }

        head=prev;
    }

    ListNode* doubleIt(ListNode* head) {
        auto t=head,t2=head,st=head;

        rev(head);

        int c=0;
        ListNode* h = new ListNode(-1);
        t=h;

        while(head or c){
            if(!head){
                ListNode* ne = new ListNode(1);
                t->next=ne;
                c=0;
                break;
            }
            int n = head->val;
            n*=2;
            n+=c;
            c=0;

            if(n>9){
                n=n%10;
                c=1;
            }

            head->val = n;
            t->next=head;
            head=head->next;
            t=t->next;
            t->next=NULL;
        }

        rev(h->next);

        return h->next;
    }
};