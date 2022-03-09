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
    ListNode* deleteDuplicates(ListNode* head) {
        if (head==NULL){
            return NULL;
        }
        ListNode* t=head;
        ListNode* prev=NULL;
        int k=0;
        ListNode* m=head->next;
        while(m!=NULL){
            if (t->val == m->val){
                t=m;
                m=m->next;
                k=1;
            }
            else{
                if (k==1){
                if (prev==NULL){
                    ListNode* p=t;
                    t=m;
                    p->next=NULL;
                    head=m;
                    prev=NULL;
                    m=m->next;
                }
                else{
                    prev->next=m;
                    t=m;
                    m=m->next;
                }
                }
                else{
                   if (prev==NULL){
                    head=t;
                    prev=t;
                } 
                    else{
                        prev=t;
                    }
                    t=m;
                    m=m->next;
                }
                k=0;
            }
        }
        if (k==1){
            if(prev==NULL){
                return NULL;
            }
            prev->next=m;
        }
        if (head==NULL){
            return NULL;
        }
        return head;
    }
};