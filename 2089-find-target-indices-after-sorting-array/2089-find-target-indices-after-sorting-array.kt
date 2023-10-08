class Solution {
    fun targetIndices(nums: IntArray, target: Int): List<Int> {
        nums.sort()
        var sortedNums = nums.toList()
        var resultNums: ArrayList<Int> = ArrayList()
        var j = 0

        for(i in 0..sortedNums.size-1) {
            if(sortedNums[i] == target) {
                resultNums.add(j,i)
                j++
            }
        }
        return resultNums
    }
}