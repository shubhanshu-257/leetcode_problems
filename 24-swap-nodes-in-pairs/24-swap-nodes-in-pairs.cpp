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
    ListNode* swapPairs(ListNode* head) {
        if (head==NULL){
            return NULL;
        }
        ListNode* p=NULL;
        ListNode* c=head;
        ListNode* n=head->next;
        while(c && n){
            c->next=n->next;
            n->next = c;
            if (p){
            p->next = n;}
            if (p==NULL){
                p=c;
                head=n;
            }
            else{
            p=p->next->next;}
            c=c->next;
            if (n->next && n->next->next){
            n=n->next->next->next;}
            else{
                n=NULL;
            }
        }
        return head;
    }
};