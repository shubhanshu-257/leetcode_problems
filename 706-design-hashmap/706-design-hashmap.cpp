class MyHashMap {
public:
    int a[1000001];
    MyHashMap() {
        for (int i=0;i<1000001;i++){
            a[i]=-2;
        }
    }
    
    void put(int key, int value) {
        a[key]=value;
    }
    
    int get(int key) {
        if (a[key]!=-2){
        return a[key];}
        return -1;
    }
    
    void remove(int key) {
        a[key]=-2;
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */