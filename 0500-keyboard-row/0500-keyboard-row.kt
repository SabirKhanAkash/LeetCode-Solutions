class Solution {
    fun String.has(characters: String): Boolean {
        return characters.all { contains(it) }
    }
    
    fun findWords(words: Array<String>): Array<String> {
        var mutableWords = words.toMutableList()
        var firstRow = "QWERTYUIOPqwertyuiop"
        var secondRow = "ASDFGHJKLasdfghjkl"
        var thirdRow = "ZXCVBNMzxcvbnm"
        
        for(i in 0..words.size-1) {
            if(!firstRow.has(words[i]) && !secondRow.has(words[i]) && !thirdRow.has(words[i])) {
                mutableWords.remove(words[i])
            }
        }
        return mutableWords.toTypedArray()
    }
}