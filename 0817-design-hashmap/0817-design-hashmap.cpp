class MyHashMap {
public:
    vector<int> num;
    int size;
    MyHashMap() {
        size = 1e6+1;
        num.resize(size);
        fill(num.begin(),num.end(),-1);
    }
    
    void put(int key, int value) {
        num[key] = value;
    }
    
    int get(int key) {
        return num[key];
    }
    
    void remove(int key) {
        num[key] = -1;
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */