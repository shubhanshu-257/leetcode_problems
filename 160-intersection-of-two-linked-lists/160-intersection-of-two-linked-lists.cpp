/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* l1=headA;
        ListNode* l2=headB;
        int cnt1=0;
        int cnt2=0;
        while(l1!=NULL){
            cnt1++;
            l1=l1->next;
        }
        while(l2!=NULL){
            cnt2++;
            l2=l2->next;
        }
        l1=headA;
        l2=headB;
        if (cnt1>cnt2){
            int x=cnt1-cnt2;
            while(x>0){
                x--;
                l1=l1->next;
            }
        }
        else if (cnt2>cnt1){
            int x=cnt2-cnt1;
            while(x>0){
                x--;
                l2=l2->next;
            }
        }
        ListNode* ans=NULL;
        while(l1!=NULL){
            if (l1==l2){
                ans=l1;
                break;
            }
            l1=l1->next;
            l2=l2->next;
        }
        return ans;
    }
};