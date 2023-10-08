class Solution {
    fun findKthPosNum(map: HashMap<Int, Int>, k: Int): Int {
        var count = 0
        for (entry in map) {
            if (count == k) {
                return entry.value
            }
            count++
        }
        return 1
    }
    
    fun findKthPositive(arr: IntArray, k: Int): Int {
        var rMap: HashMap<Int, Int> = HashMap()
        var missingArray: ArrayList<Int> = ArrayList()
        
        for(i in 0..10000) {
            var count = 0
            for(j in 0..arr.size-1) {
                if(i !== arr[j]) {
                    count++
                }
            }
            if(count === arr.size) {
                rMap[i] = i;
            }
        }
        
        return findKthPosNum(rMap, k)
    }
}