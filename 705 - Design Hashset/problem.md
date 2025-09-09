LeetCode Problem #705: Design HashSet
Link to the problem on LeetCode

Description
Design a HashSet without using any built-in hash table libraries.

Your MyHashSet class should implement the following functions:

MyHashSet(): Initializes the MyHashSet object.

void add(int key): Inserts the value key into the set.

void remove(int key): Removes the value key from the set.

bool contains(int key): Returns true if the value key exists in the set, and false otherwise.

My Approach
My approach leverages the C++ Standard Template Library's std::unordered_set to efficiently implement the required functionality. This class provides a ready-made hash-based data structure that handles all the complex logic of hashing and collision resolution for us.

The add(key) method is implemented by calling the insert() method of the std::unordered_set, which handles adding a new key while automatically avoiding duplicates.

The remove(key) method directly uses the erase() method of the std::unordered_set, which safely removes the key if it exists.

The contains(key) method uses the find() method to search for the key. If the key is found, find() returns an iterator to its location; otherwise, it returns an iterator to the end of the container (end()). By comparing the returned iterator with end(), I can determine if the key exists.

This method is the most straightforward way to solve the problem by utilizing existing, highly optimized data structures.

Complexity Analysis
add Method:

Time Complexity: O(1) on average. In the worst-case scenario (with many hash collisions), it could be O(n) where n is the number of elements in the set.

Space Complexity: O(1) amortized for adding one element.

remove Method:

Time Complexity: O(1) on average. In the worst-case scenario (with many hash collisions), it could be O(n).

Space Complexity: O(1).

contains Method:

Time Complexity: O(1) on average. In the worst-case scenario (with many hash collisions), it could be O(n).

Space Complexity: O(1).

Overall Space Complexity: O(k), where k is the number of unique elements stored in the hash set.

Solution
#include <unordered_set>

class MyHashSet {
private:
    std::unordered_set<int> hashset;

public:
    MyHashSet() {}

    void add(int key) {
        hashset.insert(key); 
    }

    void remove(int key) {
        hashset.erase(key);
    }

    bool contains(int key) {
        if (hashset.find(key) != hashset.end()) {
            return true;
        } else {
            return false;
        }
    }
};
