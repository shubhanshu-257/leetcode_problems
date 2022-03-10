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
        ListNode* t1=l1;
        ListNode* t2=l2;
        ListNode* t3=l2;
        int x=0;
        ListNode* q=l1;
        while(t1!=NULL && t2!=NULL){
            int y = t1->val + t2->val +x;
            if (y>9){
                t1->val=y%10;
                x=1;
            }
            else{
                t1->val=y%10;
                x=0;
            }
             q=t1;
            t1=t1->next;
            t2=t2->next;
           
        }
        while(t1!=NULL){
            int y=t1->val+x;
            if (y>9){
            t1->val=y%10;
                x=1;}
            else{
                t1->val=y%10;
                x=0;
            }q=t1;
            t1=t1->next;
            
        }
        ListNode* p=NULL;
        while(t2!=NULL){
            int y=t2->val+x;
            if (y>9){
            t3->val=y%10;
                x=1;}
            else{
                t3->val=y%10;
                x=0;
            }
            p=t3;
            t3=t3->next;
            t2=t2->next;
        }
        if (x==1){
            t3->val=x;
            t3->next=NULL;
            q->next=l2;
        }
        else{
            if (p!=NULL){
                p->next=NULL;
                q->next=l2;
            }
            
        }
        return l1;
    }
};