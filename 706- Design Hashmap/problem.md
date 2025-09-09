LeetCode Problem #706: Design HashMap
Link to the problem on LeetCode

Description
Design a HashMap without using any built-in hash map libraries.

Your MyHashMap class should implement the following functions:

MyHashMap(): Initializes the MyHashMap object.

void put(int key, int value): Inserts a (key, value) pair into the map. If the key already exists, update its corresponding value.

int get(int key): Returns the value to which the specified key is mapped, or -1 if this map contains no mapping for the key.

void remove(int key): Removes the key and its corresponding value if the map contains the mapping for the key.

My Approach
My solution to this problem is to use C++'s built-in std::unordered_map as the underlying data structure. This class provides an efficient and robust hash map implementation that handles all the complexities of hashing, collision resolution, and memory management.

The put(key, value) method uses the subscript operator [] of std::unordered_map. This operator is very convenient as it handles both insertion and updating: if the key doesn't exist, it is created with the new value; if it already exists, its value is simply overwritten.

The get(key) method first checks for the key's existence using the find() method. If find() returns an iterator that is not equal to the end() iterator, it means the key was found, and I can then return its value. If the key is not found, I return -1 as required by the problem description.

The remove(key) method uses std::unordered_map's erase() method, which safely removes the key-value pair. The method handles cases where the key does not exist without causing an error.

Complexity Analysis
put Method:

Time Complexity: O(1) on average. In the worst-case scenario (with many hash collisions), it could be O(n) where n is the number of elements in the map.

Space Complexity: O(1) amortized for adding one element.

get Method:

Time Complexity: O(1) on average. In the worst-case scenario (with many hash collisions), it could be O(n).

Space Complexity: O(1).

remove Method:

Time Complexity: O(1) on average. In the worst-case scenario (with many hash collisions), it could be O(n).

Space Complexity: O(1).

Overall Space Complexity: O(k), where k is the number of unique key-value pairs stored in the hash map.

Solution
#include <unordered_map>

class MyHashMap {
private:
    std::unordered_map<int, int> hashmap;
public:
    MyHashMap() {
    }
    
    void put(int key, int value) {
        hashmap[key] = value;
    }
    
    int get(int key) {
        if(hashmap.find(key) != hashmap.end()){
            return hashmap[key];
        }
        else{
            return -1;
        }
    }
    
    void remove(int key) {
        hashmap.erase(key);
    }
};
