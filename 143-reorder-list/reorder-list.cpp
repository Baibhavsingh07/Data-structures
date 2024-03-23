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
    void reorderList(ListNode* head) {
        auto a=head,b=head;
        vector<ListNode*>ll;

        while(a){
            ll.push_back(a);
            b=a->next;
            a->next=nullptr;
            a=b;
        }

        int i=0,j=ll.size()-1;
        ListNode* h = new ListNode(-1);
        auto t=h;
        while(i<j){
            t->next=ll[i];
            ll[i]->next=ll[j];
            i++;
            j--;
            t=t->next->next;
        }

        if(i==j)t->next=ll[i];

        head=h;
    }
};