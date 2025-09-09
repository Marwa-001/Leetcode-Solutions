#include <iostream>
#include <vector>

class Solution {
public:
    std::vector<std::vector<int>> flipAndInvertImage(std::vector<std::vector<int>>& image) {
        // Get the dimensions of the image.
        int rows = image.size();
        if (rows == 0) {
            return {}; // Handle empty image case.
        }
        int cols = image[0].size();

        // Create a new vector to store the flipped and inverted image.
        std::vector<std::vector<int>> resulting(rows, std::vector<int>(cols));

        // Iterate through each row.
        for(int i = 0; i < rows; ++i) {
            // Iterate through each element in the row.
            for(int j = 0; j < cols; ++j) {
                // To flip horizontally, the element at index j in the resulting image
                // will be the element from the reversed position (cols - 1 - j)
                // in the original image.
                // To invert, we can use the simple formula 1 - value.
                // If the value is 0, 1 - 0 = 1.
                // If the value is 1, 1 - 1 = 0.
                resulting[i][j] = 1 - image[i][cols - 1 - j];
            }
        }
        return resulting;
    }
};

// Helper function to print a 2D vector for demonstration purposes.
void printImage(const std::vector<std::vector<int>>& image) {
    for (const auto& row : image) {
        for (int val : row) {
            std::cout << val << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    Solution sol;
    
    // Example 1
    std::vector<std::vector<int>> image1 = {{1,1,0},{1,0,1},{0,0,0}};
    std::cout << "Original Image 1:" << std::endl;
    printImage(image1);
    std::vector<std::vector<int>> result1 = sol.flipAndInvertImage(image1);
    std::cout << "\nFlipped and Inverted Image 1:" << std::endl;
    printImage(result1);
    
    std::cout << "\n------------------\n";

    // Example 2
    std::vector<std::vector<int>> image2 = {{1,1,0,0},{1,0,0,1},{0,1,1,1},{1,0,1,0}};
    std::cout << "Original Image 2:" << std::endl;
    printImage(image2);
    std::vector<std::vector<int>> result2 = sol.flipAndInvertImage(image2);
    std::cout << "\nFlipped and Inverted Image 2:" << std::endl;
    printImage(result2);

    return 0;
}
