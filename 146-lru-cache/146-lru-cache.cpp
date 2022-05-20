class LRUCache {
public:
    class node{
    public:
        int val;
        int key;
        node* next;
        node* prev;
        node(int _key,int _val){
            key=_key;
            val=_val;
        }
    };
    unordered_map<int,node*>mp;
    node* head=new node(-1,-1);
    node* tail=new node(-1,-1);
    int cap;
    
    LRUCache(int capacity) {
        cap=capacity;
        head->next=tail;
        tail->prev=head;
    }
    void deletenode(node* res){
        node* dp=res->prev;
        node* dn=res->next;
        dp->next=dn;
        dn->prev=dp;
    }
    void addnode(node* res){
        node* temp=head->next;
        res->prev=head;
        res->next=temp;
        head->next=res;
        temp->prev=res;
    }
    int get(int _key) {
        if (mp.find(_key)!=mp.end()){
            node* t=mp[_key];
            int x=t->val;
            deletenode(t);
            addnode(t);
            mp[_key]=head->next;
            return x;
        }
        return -1;
    }
    
    void put(int _key, int value) {
        if (mp.find(_key)!=mp.end()){
            mp[_key]->val=value;
            node* res=mp[_key];
            deletenode(res);
            addnode(res);
            mp[_key]=head->next;
        }
        else{
            if (cap==mp.size()){
                mp.erase(tail->prev->key);
                deletenode(tail->prev); 
            }
            node* t=new node(_key,value);
            addnode(t);
            mp[_key]=head->next;
        }
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */