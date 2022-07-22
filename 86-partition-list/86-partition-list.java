/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode partition(ListNode head, int x) {
        ListNode h1=new ListNode(0);
        ListNode h2=new ListNode(0);
        ListNode p1=null;
        ListNode p2=null;
        ListNode t=head;
        while(t!=null){
            if (t.val<x){
                if (p1==null){
                    p1=t;
                    h1.next=p1;
                }
                else{
                    p1.next=t;
                    p1=p1.next;
                }
                //System.out.println(p1.val);
            }
            else{
                if (p2==null){
                    p2=t;
                    h2.next=p2;
                }
                else{
                    p2.next=t;
                    p2=p2.next;
                }
            }
            t=t.next;
        }
        if (h1.next==null){
            return h2.next;
        }
        else{
            p1.next=h2.next;
            if (p2!=null){
            p2.next=null;}
        }
        return h1.next;
    }
}