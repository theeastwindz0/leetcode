class MyHashSet {
public:
    int v1[1000001];
    MyHashSet() {
        fill(v1,v1+1000001,0);
    }
    
    void add(int key) {
        if(v1[key]==0)v1[key]++;
    }
    
    void remove(int key) {
        if(v1[key]==1)v1[key]--;
    }
    
    bool contains(int key) {
        if(v1[key]!=0)return true;
        else return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */