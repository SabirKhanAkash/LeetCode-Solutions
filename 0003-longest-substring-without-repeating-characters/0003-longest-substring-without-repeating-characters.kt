class Solution {
    fun lengthOfLongestSubstring(s: String): Int {
        var cMap: HashMap<Char, Int> = HashMap()
        var left = 0
        var length = 0
        
        for(right in 0..s.length-1) {
            if(!cMap.containsKey(s[right]) || cMap[s[right]]!! < left) {
                cMap.put(s[right], right)
                length = maxOf(length, right - left + 1)
            }
            else {
                left = cMap[s[right]]!! + 1
                cMap.put(s[right], right)
            }
        }
        return length
    }
}