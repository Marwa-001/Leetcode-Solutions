/**
 * @param {number[]} nums
 * @return {number}
 */
var maxSubArray = function(nums) {
    let currentSum = nums[0];
    let maxSum = nums[0];

    for (let i = 1; i < nums.length; i++) {
        // Choice: Start fresh at nums[i] OR add nums[i] to currentSum
        currentSum = Math.max(nums[i], currentSum + nums[i]);

        // Update the overall best sum we've found so far
        maxSum = Math.max(maxSum, currentSum);
    }

    return maxSum;
};