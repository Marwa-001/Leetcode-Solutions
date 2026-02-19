/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number}
 */
var threeSumClosest = function(nums, target) {
    let result = []
    let prev_sum=nums[0] + nums[1] + nums[2]
    nums = nums.sort((a,b)=>a-b)
    for (let i = 0; i<nums.length-2; i++){
        let j=i+1; 
        let k = nums.length - 1
        while(j<k){
            sum = nums[i] + nums[j] + nums[k]
            if(Math.abs(sum-target) < Math.abs(prev_sum-target)){
                prev_sum = sum
            }
            if(sum>target){
                k--
            }
            else if(sum<target){
                j++
            }
            else{
                return prev_sum
            }
        }
    }
    return prev_sum
};