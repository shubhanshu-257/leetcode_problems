/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if (head==NULL){
            return NULL;
        }
        Node* t=head;
        Node* t1=head;
        Node* m=new Node(1);
        Node* p=m;
       
        int k=1;
        while(t!=NULL){
            if (k==1){
                m->val=t->val;
                m->next=t->next;
                k=0;
            }
            else{
                Node* w=new Node(t->val);
               w->val=t->val;
                w->next=t->next;
                 m->next=w;
                m=m->next;
            }
            t=t->next;
        }
        m->next=NULL;
        Node* p2=p;
        while(t1!=NULL){
            Node* u=t1->next;
            t1->next=p2;
            t1=u;
            Node* v=p2->next;
            p2->next=t1;
            p2=v;
        }
        p2=head;
        while(p2!=NULL){
            Node* k1=p2->random;
            p2=p2->next;
            if (k1){
                p2->random=k1->next;
            }
            
            p2=p2->next;
        }
        p2=head;
        k=1;
        Node* j=NULL;
        Node* i=NULL;
        while(p2!=NULL){
            if (k==1){
                i=p2;
                j=p2->next;
                p2=p2->next->next;
                k=0;
            }
            else{
                i->next=p2;
                i=p2;
                j->next=p2->next;
                j=p2->next;
                p2=p2->next->next;

            }
        }i->next=NULL;
        
        
        return p;
    }
};