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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        auto t1=list1,t2=list2;
        ListNode* t=nullptr;

        while( t1 and --a and b-- )t1=t1->next;
        while(t2 and t2->next ) t2=t2->next;


        auto t3=t1;

        while(t3 and b--) t3=t3->next;

        t1->next = list2;
        t2->next=t3->next;

        return list1;  
    }
};