/**
 * @param {string} s
 * @return {boolean}
 */
var isPalindrome = function(s) {
    s=s.toLowerCase().replaceAll(/[^a-zA-Z0-9]/g, "")
    console.log(s)
    console.log(s.reverse)
    if (s.split('').reverse().join('') == s){
        return true
    }
    return false
};