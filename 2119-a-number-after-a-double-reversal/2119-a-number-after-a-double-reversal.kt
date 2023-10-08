class Solution {
    fun isSameAfterReversals(num: Int): Boolean {
        return if(num!=0 && num.toString().get(num.toString().length-1).equals('0')) false else true 
    }
}