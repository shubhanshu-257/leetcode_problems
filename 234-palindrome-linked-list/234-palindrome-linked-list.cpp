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
    bool isPalindrome(ListNode* head) {
        if (head==NULL || head->next==NULL){
            return head;
        }
        ListNode* slow=head;
        ListNode* fast=head->next;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* prev=slow;
        ListNode* cur=slow->next;
        ListNode* nex=slow->next;
        while(cur!=NULL){
            nex=cur->next;
            cur->next=prev;
            prev=cur;
            cur=nex;
        }
        slow->next=NULL;
        while(head!=NULL){
            if(head->val!=prev->val){
                return false;
            }
            head=head->next;
            prev=prev->next;
        }
        return true;
    }
};