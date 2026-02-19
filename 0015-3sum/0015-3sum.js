/**
 * @param {number[]} nums
 * @return {number[][]}
 */
var threeSum = function (nums) {
    result = []
    nums=nums.sort((a, b) => a - b)
    if(nums[0]>0){
        return result
    }
    for (let i = 0; i < nums.length - 2; i++) {
        let j = i+1;
        let k = nums.length - 1
        if(nums[i]==nums[i-1]){
            continue
        }
        while (j < k) {
            if (i != j && j != k && i != k && nums[i] + nums[j] + nums[k] === 0) {
                result.push([nums[i], nums[j], nums[k]])
                while(j<k && nums[j]==nums[j+1]){
                    j++
                }
                while(j<k && nums[k]==nums[k-1]){
                    k--
                }
                j++
                k--
            }
            else if(nums[i] + nums[j] + nums[k]>0){
                k--
            }
            else{
                j++
            }
        }


    }
    return result
};