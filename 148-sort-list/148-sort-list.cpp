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
    ListNode* merge(ListNode* t1,ListNode* t2){
        ListNode* m=new ListNode(-1);
        ListNode* cur=m;
        while(t1!=NULL && t2!=NULL){
        if (t1->val>=t2->val){
            cur->next=t2;
            t2=t2->next;
        }
        else{
            cur->next=t1;
            t1=t1->next;
        }
        cur=cur->next;}
        cur->next=t1!=NULL?t1:t2;
        
        return m->next;
    }
    ListNode* Mid(ListNode* head){
        ListNode* slow=head;
        ListNode* fast=head->next;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* p=slow->next;
        slow->next=NULL;
      return p;
    }
    ListNode* sortList(ListNode* head) {
        if (head==NULL|| head->next==NULL){
            return head;
        }
        ListNode* mid=Mid(head);
        ListNode* left=sortList(head);
        ListNode* right=sortList(mid);
       return merge(left,right);
        
    }
};