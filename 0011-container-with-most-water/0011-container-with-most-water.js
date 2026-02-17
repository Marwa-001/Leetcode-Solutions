/**
 * @param {number[]} height
 * @return {number}
 */
var maxArea = function (height) {
    if (height.length === 0) {
        return 0
    }
    let left = height[0]
    let right = height[height.length - 1]
    let left_pointer = 0
    let right_pointer = height.length - 1
    let max_area = left > right ? (right_pointer - left_pointer) * right : (right_pointer - left_pointer) * left

    while (left_pointer < right_pointer) {
        let area = left > right ? (right_pointer - left_pointer) * right : (right_pointer - left_pointer) * left
        if (area > max_area) {
            max_area = area
        }
        if(left> right){
            right_pointer--;
            right=height[right_pointer]
        }
        else{
            left_pointer++; 
            left = height[left_pointer]
        }
    }
    return max_area
};