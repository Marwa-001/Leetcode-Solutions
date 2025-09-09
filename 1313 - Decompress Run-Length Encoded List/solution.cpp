#include <iostream>
#include <vector>

class Solution {
public:
    std::vector<int> decompressRLElist(std::vector<int>& nums) {
        std::vector<int> ans;
        for (int i = 0; i < nums.size(); i += 2) {
            int freq = nums[i];
            int val = nums[i + 1];
            for (int k = 0; k < freq; k++) {
                ans.push_back(val);
            }
        }
        return ans;
    }
};

void printVector(const std::vector<int>& vec) {
    std::cout << "[";
    for (size_t i = 0; i < vec.size(); ++i) {
        std::cout << vec[i];
        if (i < vec.size() - 1) {
            std::cout << ", ";
        }
    }
    std::cout << "]" << std::endl;
}

int main() {
    Solution sol;
    
    // Example 1
    std::vector<int> nums1 = {1, 2, 3, 4};
    std::cout << "Input: ";
    printVector(nums1);
    std::vector<int> result1 = sol.decompressRLElist(nums1);
    std::cout << "Output: ";
    printVector(result1); // Expected: [2, 4, 4, 4]
    
    std::cout << "\n------------------\n";

    // Example 2
    std::vector<int> nums2 = {1, 1, 2, 3};
    std::cout << "Input: ";
    printVector(nums2);
    std::vector<int> result2 = sol.decompressRLElist(nums2);
    std::cout << "Output: ";
    printVector(result2); // Expected: [1, 3, 3]

    return 0;
}
