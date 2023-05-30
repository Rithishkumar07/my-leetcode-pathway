class MyHashSet {
public:
    int mp[1000001];
    MyHashSet() {
    }
    
    void add(int key) {
        mp[key]=1;
    }
    
    void remove(int key) {
        mp[key]=0;
    }
    
    bool contains(int key) {
        return mp[key]==1;
    }
};
