class Solution {
    fun checkAnagram(word1: String, word2: String) : Boolean {
        var lMap: HashMap<Char, Int> = HashMap()
        var rMap: HashMap<Char, Int> = HashMap()
        
        for(i in 0..word1.length-1) {
            if(lMap.containsKey(word1[i]))
                lMap.put(word1[i], lMap[word1[i]]!! + 1)
            else
                lMap.put(word1[i], 1)
        }
        
        for(i in 0..word2.length-1) {
            if(rMap.containsKey(word2[i]))
                rMap.put(word2[i], rMap[word2[i]]!! + 1)
            else
                rMap.put(word2[i], 1)
        }
        
        if(lMap == rMap)
            return true
        
        return false
    }
    
    fun removeAnagrams(words: Array<String>): List<String> {
        var i=words.size-1
        var mutableWords = words.toMutableList()
        while(i>0) {
            if(checkAnagram(words[i], words[i-1]))
                mutableWords.removeAt(i)
            i--
        }
        
        return mutableWords.toList()
    }
}