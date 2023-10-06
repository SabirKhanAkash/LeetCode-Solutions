class Solution {
    fun twoSum(nums: IntArray, target: Int): IntArray {
        var numMap = HashMap<Int, Int>()
        
        for(i in nums.indices) {
            var diff = target - nums[i];
            if(numMap.containsKey(diff))
                return intArrayOf(numMap[diff]!!,i)
            numMap.put(nums[i], i)
        }
        return nums
    }
}