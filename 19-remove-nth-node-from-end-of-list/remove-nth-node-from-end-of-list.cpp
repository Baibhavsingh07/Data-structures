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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp=head;
   

        if(!head or !head->next){
            return NULL;
        }
        int nodes=0;
        
        while(temp!=NULL){
            nodes++;
            temp=temp->next;
    }

        int c=1;
        int pos=nodes-n;

        if(n==nodes){
            head=head->next;
        }
    else
    {temp=head;
    while(c!=pos and temp!=NULL ){
        temp=temp->next;
        c++;
    }

    temp->next=temp->next->next;}

    return head;
        
        
    }
};