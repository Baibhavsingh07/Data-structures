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

    pair<ListNode*,ListNode*>rev(ListNode* &st,ListNode* t){
        ListNode* t1=st,*pre=nullptr,*nxt;

        while(t1){
            nxt = t1->next;
            t1->next=pre;
            

            pre=t1;
            t1=nxt;
        }

        auto x=pre;
        while(x->next)
        x=x->next;

        return {pre,x};
    }


    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* t=head,*st=head,*pst=nullptr;

        while(t){
            st=t;
            int c=k-1;
            while(c and t){
                t=t->next;
                c--;
            }

            if(c!=0 or !t) return head;

            ListNode* nxt =nullptr;

            if(t){
            nxt= t->next;
            t->next=nullptr;
            }

          auto x =  rev(st,t);

          auto nh = x.first;
          auto nt = x.second;

            if(pst)
            pst->next=nh;
            else
            head = nh;

            if(nt)
            nt->next = nxt;

            pst = nt;
            t = nxt;
        }

        return head;
    }
};