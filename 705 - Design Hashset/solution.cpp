#include <iostream>
#include <unordered_set>

class MyHashSet {
private:
    std::unordered_set<int> hashset;

public:
    MyHashSet() {}

    void add(int key) {
        // The insert method handles the check for existence automatically,
        // so no need to check if the key is already there.
        hashset.insert(key); 
    }

    void remove(int key) {
        // The erase method handles cases where the key doesn't exist gracefully,
        // so no need for a conditional check.
        hashset.erase(key);
    }

    bool contains(int key) {
        // Use find to get an iterator. If the key is found, the iterator
        // will not be equal to the end() iterator.
        if (hashset.find(key) != hashset.end()) {
            return true;
        } else {
            return false;
        }
    }
};

int main() {
    MyHashSet myHashSet;
    std::cout << "--- Initializing MyHashSet ---" << std::endl;

    myHashSet.add(1);
    myHashSet.add(2);
    std::cout << "Added 1 and 2 to the set." << std::endl;

    std::cout << "Does the set contain 1? " << std::boolalpha << myHashSet.contains(1) << std::endl;    // Expected: true
    std::cout << "Does the set contain 3? " << std::boolalpha << myHashSet.contains(3) << std::endl;    // Expected: false

    myHashSet.add(2); // Adding a duplicate key
    std::cout << "Added 2 again to test for duplicates." << std::endl;
    std::cout << "Does the set contain 2? " << std::boolalpha << myHashSet.contains(2) << std::endl;    // Expected: true

    myHashSet.remove(2);
    std::cout << "Removed 2 from the set." << std::endl;
    std::cout << "Does the set contain 2? " << std::boolalpha << myHashSet.contains(2) << std::endl;    // Expected: false

    myHashSet.remove(3); // Removing a non-existent key
    std::cout << "Tried to remove 3 (which doesn't exist)." << std::endl;
    std::cout << "Does the set contain 3? " << std::boolalpha << myHashSet.contains(3) << std::endl;    // Expected: false
    
    std::cout << "Does the set contain 1? " << std::boolalpha << myHashSet.contains(1) << std::endl;    // Expected: true

    return 0;
}
