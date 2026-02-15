/**
 * @param {number[]} nums1
 * @param {number[]} nums2
 * @return {number}
 */
var findMedianSortedArrays = function(nums1, nums2) {
    let nums1_size=nums1.length
    let nums2_size=nums2.length
    nums1.push(nums2)
    nums1 = nums1.flat()
    console.log(nums1.sort((a, b) => a - b))
    let totalLength = nums1.length;
    let mid = totalLength / 2;

    if (Number.isInteger(mid)) {
        // If mid is 4, we need the elements at index 3 and index 4
        let leftIndex = mid - 1;
        let rightIndex = mid;
        return (nums1[leftIndex]+nums1[rightIndex])/2
        
        // The median will be (ValueAt[leftIndex] + ValueAt[rightIndex]) / 2
    } else {
        // If mid is 4.5, the median is just the element at index 4 (Math.floor(4.5))
        let medianIndex = Math.floor(mid);
        return nums1[medianIndex]
    }
    return -1
};