#include <iostream>
#include <unordered_map>

class MyHashMap {
private:
    std::unordered_map<int, int> hashmap;
public:
    MyHashMap() {
    }
    
    void put(int key, int value) {
        // The [] operator and insert() in unordered_map can be used to handle both
        // insertion of new key-value pairs and updating existing keys.
        // It's often simpler to just use the [] operator for both cases.
        hashmap[key] = value;
    }
    
    int get(int key) {
        // Check if the key exists using find().
        if(hashmap.find(key) != hashmap.end()){
            // If the key is found, return its corresponding value.
            return hashmap[key];
        }
        else{
            // If the key is not found, return -1 as per the problem description.
            return -1;
        }
    }
    
    void remove(int key) {
        // The erase method handles cases where the key doesn't exist gracefully,
        // so no need for a conditional check.
        hashmap.erase(key);
    }
};

int main() {
    MyHashMap myHashMap;
    std::cout << "--- Initializing MyHashMap ---" << std::endl;

    myHashMap.put(1, 1);
    myHashMap.put(2, 2);
    std::cout << "Added key-value pairs (1, 1) and (2, 2)." << std::endl;

    std::cout << "Value for key 1: " << myHashMap.get(1) << std::endl; // Expected: 1
    std::cout << "Value for key 2: " << myHashMap.get(2) << std::endl; // Expected: 2
    std::cout << "Value for key 3: " << myHashMap.get(3) << std::endl; // Expected: -1

    myHashMap.put(2, 5); // Update the value for key 2
    std::cout << "Updated value for key 2 to 5." << std::endl;
    std::cout << "Value for key 2: " << myHashMap.get(2) << std::endl; // Expected: 5

    myHashMap.remove(2);
    std::cout << "Removed key 2." << std::endl;
    std::cout << "Value for key 2 after removal: " << myHashMap.get(2) << std::endl; // Expected: -1

    return 0;
}
