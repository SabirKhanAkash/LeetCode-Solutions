class Solution {
    fun intersection(nums: Array<IntArray>): List<Int> {
        var numMap: HashMap<Int, Int> = HashMap()
        var result = mutableListOf<Int>()
        
        for(i in 0..nums.size-1) {
            for(j in 0..nums[i].size-1) {
                if(numMap.containsKey(nums[i][j])) {
                    numMap.put(nums[i][j], numMap[nums[i][j]]!! + 1)
                }
                else {
                    numMap.put(nums[i][j]!!, 1)
                }
            }
            
        }

        for(i in numMap) {
            if(nums.size == i.value) {
                result.add(i.key)
            }
        }
        return result.toList().sorted()
    }
}