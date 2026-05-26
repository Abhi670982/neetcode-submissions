class MyHashMap {
public:

    vector<vector<int>> bigarr;

    MyHashMap() {

    }

    void put(int key, int value) {

       
        for(int i = 0; i < bigarr.size(); i++) {

            if(bigarr[i][0] == key) {

                bigarr[i][1] = value;
                return;
            }
        }

        
        bigarr.push_back({key, value});
    }

    int get(int key) {

        for(int i = 0; i < bigarr.size(); i++) {

            if(bigarr[i][0] == key) {

                return bigarr[i][1];
            }
        }

        return -1;
    }

    void remove(int key) {

        for(int i = 0; i < bigarr.size(); i++) {

            if(bigarr[i][0] == key) {

                bigarr.erase(bigarr.begin() + i);
                return;
            }
        }
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */