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
    ListNode* removeZeroSumSublists(ListNode* head) {
        map<int, ListNode*>map;
        ListNode* dummy=new ListNode(0);
        dummy->next=head;
        map[0]=dummy;
        int sum=0;
        ListNode* ptr=head;
        

        while(ptr!=NULL){
            sum+=ptr->val;
            if(map.find(sum)!=map.end()){
                ListNode *prevadd=map[sum];
                int prevsum=sum;
                ListNode* temp=prevadd->next;
                while(temp!=ptr){
                    prevsum+=temp->val;
                    map.erase(prevsum);
                    temp=temp->next;
                }
                prevadd->next=ptr->next;
            }
            else{
                map[sum]=ptr;
            }
            ptr=ptr->next;
        }
        return dummy->next;

        
    }
};