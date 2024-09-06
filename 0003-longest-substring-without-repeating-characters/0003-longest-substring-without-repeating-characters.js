/**
 * @param {string} s
 * @return {number}
 */
var lengthOfLongestSubstring = function (s) {
    var characterSet = new Set();
    var extraCharIndex = 0, maxLength = 0;

    for (let i = 0; i < s?.length; i++) {
        while(characterSet.has(s[i])) {
            characterSet.delete(s[extraCharIndex]);
            extraCharIndex++;
        }
        characterSet.add(s[i]);
        maxLength = Math.max(maxLength, (i - extraCharIndex) + 1);
    }
    return maxLength;
};