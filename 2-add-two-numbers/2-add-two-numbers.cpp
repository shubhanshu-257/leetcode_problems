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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* t1=NULL;
        ListNode* t2=NULL;
        int x=0;
        while(l1!=NULL && l2!=NULL){
            ListNode* t=new ListNode(0);
            int m=l1->val+l2->val+x;
            //cout<<m;
            
            x=m/10;
            m=m%10;
            t->val=m;
            if (t1){
                t1->next=t;
                t1=t1->next;
            }
            else{
                t1=t;
                t2=t;
            }
            l1=l1->next;
            l2=l2->next;
        }
        while(l1!=NULL){
            ListNode* t=new ListNode(0);
            int m=l1->val+x;
            
            x=m/10;
            m=m%10;
            t->val=m;
            if (t1){
                t1->next=t;
                t1=t1->next;
            }
            else{
                t1=t;
                t2=t;
            }
            l1=l1->next;
        }
        while(l2!=NULL){
            ListNode* t=new ListNode(0);
            int m=l2->val+x;
            
            x=m/10;
            m=m%10;
            t->val=m;
            if (t1){
                t1->next=t;
                t1=t1->next;
            }
            else{
                t1=t;
                t2=t;
            }
            l2=l2->next;
        }
        if (x!=0){
            ListNode* t=new ListNode(0);
            int m=x;
            m=m%10;
            x=m/10;
            t->val=m;
            if (t1){
                t1->next=t;
                t1=t1->next;
            }
            else{
                t1=t;
                t2=t;
            }
            
        }
        return t2;
    }
};