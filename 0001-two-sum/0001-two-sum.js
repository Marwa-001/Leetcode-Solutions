/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function(nums, target) {
    let numsMap = new Map()
    for (let i =0; i<nums.length; i++){
        diff = target - nums[i]
        if (numsMap.has(diff)){
            return [numsMap.get(diff), i]
        }
        numsMap.set(nums[i], i)
    }
    return []
};