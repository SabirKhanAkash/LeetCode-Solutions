class Solution {
    fun countWords(words1: Array<String>, words2: Array<String>): Int {
        var firstWordMap: HashMap<String, Int> = HashMap()
        var secondWordMap: HashMap<String, Int> = HashMap()
        
        for(i in 0..words1.size-1) {
            if(firstWordMap.containsKey(words1[i])) {
                firstWordMap.put(words1[i], firstWordMap[words1[i]]!! + 1)
            }
            else {
                firstWordMap.put(words1[i], 1)
            }    
        }
        
        for(i in 0..words2.size-1) {
            if(secondWordMap.containsKey(words2[i])) {
                secondWordMap.put(words2[i], secondWordMap[words2[i]]!! + 1)
            }
            else {
                secondWordMap.put(words2[i], 1)
            }    
        }
        var count = 0
        for(i in firstWordMap) {
            for(j in secondWordMap) {
                if(i.key == j.key && i.value == 1 && j.value == 1) {
                    count++
                    break
                }
            }
        }
        
        return count
    }
}