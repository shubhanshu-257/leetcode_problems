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
    ListNode* swapNodes(ListNode* head, int k) {
        if (head==NULL){
            return NULL;
        }
        ListNode* s=head;
        ListNode* f=head;
        ListNode* t1=head;
        int m=0;
        int cnt=0;
        while(s!=NULL){
            if (k==1){
                t1=s;
            }
            if (k<=0){
              if (f->next){
                  m=1;
                  f=f->next;
              }
            }
            k--;
            s=s->next;
            cnt++;
            
        }
        s=head;
        if (cnt==2){
            swap(s->val,s->next->val);
        }
        else{
        
        swap(f->val,t1->val);
        }
        return head;
        
        
    }
};