/**
 * @param {string} s
 * @return {number}
 */
var firstUniqChar = function(s) {
    s = s.toLowerCase()
    freq = new Map()

    for(let i = 0; i<s.length; i++){
         if (freq.has(s[i])){
            freq.set(s[i], freq.get(s[i])+1)
         }
         else{
            freq.set(s[i], 1)
         }
    }

    for(let i=0; i<s.length; i++){
        if (freq.get(s[i])==1){
            return i
        }
    }
    return -1
};