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
    ListNode* mergeInBetween(ListNode* l1, int a, int b, ListNode* l2) {
        ListNode*t1=l1,*t2=l2;

        ListNode*t = l1;

        while(t and b){
            b--;
            t=t->next;
        }
        t=t->next;

        a--;

        while(t1 and t1->next and a){
           a--;
            t1=t1->next;
        }
        t1->next = t2;

        while(t2 and t2->next){
            t2=t2->next;
        }
        
        t2->next = t;
        return l1;
        
    }
};