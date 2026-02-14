/**
 * @param {string[]} strs
 * @return {string}
 */
var longestCommonPrefix = function(strs) {
    pref = strs[0]
    if(pref==""){
        return ""
    }
    for (let i = 1; i<strs.length; i++){
        while (!strs[i].startsWith(pref)) {
            // Shorten the prefix by one character from the end
            pref = pref.substring(0, pref.length - 1);
            
            // If it's empty, there is no common prefix at all
            if (pref === "") return "";
        }
    }
    return pref
};