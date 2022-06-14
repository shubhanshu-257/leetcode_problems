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
    void reverse(ListNode* s,ListNode* e){
        
        ListNode* pr=s;
        ListNode* cur=s->next;
        ListNode* ne=s->next;
        while(pr!=e){
            ne=cur->next;
            cur->next=pr;
            pr=cur;
            cur=ne;
        }
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        if (head==NULL || head->next==NULL || k==1){
            return head;
        }
        ListNode* s=head;
        ListNode* e=head;
        int in=k-1;
        while(in--){
            e=e->next;
            if (e==NULL){
                return head;
            }
        }
        ListNode* p=NULL;
        if (e){
        p=e->next;}
        ListNode* newhead=reverseKGroup(p,k);
        if (e){
        reverse(s,e);}
        s->next=newhead;
        return e;
    }
};