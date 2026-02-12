/**
 * @param {number[]} nums
 * @return {number}
 */
var missingNumber = function(nums) {
    const n = nums.length;
    // Expected sum of 0 to n
    const expectedSum = (n * (n + 1)) / 2;
    
    // Actual sum of numbers in array
    // .reduce is the JS equivalent of Python's sum()
    const actualSum = nums.reduce((acc, curr) => acc + curr, 0);
    
    return expectedSum - actualSum;
};