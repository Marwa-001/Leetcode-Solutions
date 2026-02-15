/**
 * @param {number[]} nums
 * @return {number}
 */
var findPeakElement = function(nums) {
    for (let i = 0; i < nums.length; i++) {
        // Check if current is greater than left neighbor (or if no left neighbor exists)
        // AND greater than right neighbor (or if no right neighbor exists)
        if ((i === 0 || nums[i] > nums[i - 1]) && 
            (i === nums.length - 1 || nums[i] > nums[i + 1])) {
            return i;
        }
    }
};