LeetCode Problem #832: Flipping an Image
Link to the problem on LeetCode

Description
Given an n x n binary matrix image, flip the image horizontally, then invert it.

To flip an image horizontally means that each row of the image is reversed. For example, flipping [1,1,0] horizontally results in [0,1,1].

To invert an image means that each 0 is replaced by 1, and each 1 is replaced by 0. For example, inverting [0,1,1] results in [1,0,0].

My Approach
My approach involves creating a new matrix to store the result, ensuring the original image remains unchanged. I iterate through the input matrix row by row. For each row, I perform a two-step process:

Horizontal Flip: I iterate from the beginning of the new row and the end of the original row simultaneously. I copy the elements from the original row's reversed position to the new row's current position.

Inversion: As I copy each element, I immediately invert its value. If the value is 0, I change it to 1, and if it's 1, I change it to 0.

This combined process of flipping and inverting in a single pass ensures that I build the final resulting matrix efficiently.

Complexity Analysis
Time Complexity: O(N 
2
 ), where N is the number of rows (and columns) of the image. My solution involves a nested loop that visits every element in the matrix exactly once.

Space Complexity: O(N 
2
 ), where N is the number of rows (and columns) of the image. I am creating a new matrix of the same size to store the result, which requires extra space proportional to the size of the input.

Solution
#include <vector>

class Solution {
public:
    std::vector<std::vector<int>> flipAndInvertImage(std::vector<std::vector<int>>& image) {
        int rows = image.size();
        if (rows == 0) {
            return {};
        }
        int cols = image[0].size();
        
        std::vector<std::vector<int>> resulting(rows, std::vector<int>(cols));
        
        for(int i = 0; i < rows; ++i) {
            for(int j = 0; j < cols; ++j) {
                // Flip horizontally by mapping j to its reversed position (cols - 1 - j)
                // And invert the value (1 becomes 0, 0 becomes 1)
                resulting[i][j] = 1 - image[i][cols - 1 - j];
            }
        }
        return resulting;
    }
};
