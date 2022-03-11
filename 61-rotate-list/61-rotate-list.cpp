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
    ListNode* rotateRight(ListNode* head, int k) {
        if (head==NULL){
            return NULL;
        }
        int cnt=0;
        ListNode* t=head;
        while(t!=NULL){
            cnt++;
            t=t->next;
        }
        if (k%cnt==0){
            return head;
        }
        int x=cnt-(k%cnt);
        cout<<x;
        t=head;
        ListNode* t1=head;
        while(x>1){
            t=t->next;
            x--;
        }
        cout<<t->val;
        ListNode* t2=t->next;
        t->next=NULL;
        ListNode* t3=t2;
        while(t3->next!=NULL){
            t3=t3->next;
        }
        t3->next=t1;
        return t2;
        
    }
};