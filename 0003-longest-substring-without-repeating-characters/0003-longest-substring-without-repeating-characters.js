/**
 * @param {string} s
 * @return {number}
 */
var lengthOfLongestSubstring = function (s) {
    let left = 0;
    let maxLength = 0;
    let charSet = new Set(); // Using a Set is much faster than .includes()

    for (let right = 0; right < s.length; right++) {
        // If we hit a duplicate, shrink the window from the left
        while (charSet.has(s[right])) {
            charSet.delete(s[left]);
            left++;
        }
        
        // Add the current character and update max
        charSet.add(s[right]);
        maxLength = Math.max(maxLength, right - left + 1);
    }

    return maxLength;
};