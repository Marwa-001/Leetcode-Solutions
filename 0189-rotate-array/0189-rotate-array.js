/**
 * @param {number[]} nums
 * @param {number} k
 * @return {void} Do not return anything, modify nums in-place instead.
 */
var rotate = function (nums, k) {
    let n = nums.length;
    let result = new Array(n);

    for (let i = 0; i < n; i++) {
        // Calculate the new home for this number
        let newIndex = (i + k) % n;
        result[newIndex] = nums[i];
    }
    // The problem usually asks to modify 'nums' in-place
    // So we copy the result back into the original array
    for (let i = 0; i < n; i++) {
        nums[i] = result[i];
    }
};