class Solution {
    fun greatestLetter(s: String): String {
        var sortedString = s.toList().sortedByDescending { it }.joinToString("")
        for(i in 0..s.length-1) {
            for(j in 0..s.length-1) {
                if(sortedString[i].equals(sortedString[j], ignoreCase = true) && 
                        ((sortedString[i].isUpperCase() &&sortedString[j].isLowerCase()) || 
                                (sortedString[j].isUpperCase() && sortedString[i].isLowerCase())))
                return sortedString[i].toString().toUpperCase()
            }
        }
        return ""
    }
}