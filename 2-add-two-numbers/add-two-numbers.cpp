class Solution {
public:
ListNode* dummy=new ListNode();
ListNode* temp=dummy;

    int solve(ListNode* l1,ListNode* l2,int c){
        if(!l1 and !l2)
        {
            if(c)
            return 1;
            return 0;
        }
        else if(!l2){
            int s=l1->val+c;
            c=0;
            if(s>9)
            c=1;
            l1->val=s%10;

            if(c==1){
                int v=solve(l1->next,l2,c);
                if(v){
                l1->next=new ListNode(1);
                return 0;
                }
            }
        
        }else{
        int s=l1->val+l2->val+c;
        c=0;
        if(s>9)
        c=1;
        l1->val=s%10;

        int v=solve(l1->next,l2->next,c);
        if(v){
            l1->next=new ListNode(1);
            return 0;
        }
        }
        return 0;

    }

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* temp=l1;
        int c1=0,c2=0;
        while(temp){
            c1++;
            temp=temp->next;
        }
        temp=l2;
        while(temp){
            c2++;
            temp=temp->next;
        }
        if(c1>=c2){
        solve(l1,l2,0);
        return l1;
        }
        else
        solve(l2,l1,0);
        return l2;
        
    }
};





