class Solution {
    fun destCity(paths: List<List<String>>): String {
        var cityMap: HashMap<String, String> = HashMap()
        var src: ArrayList<String> = ArrayList()
        var dest: ArrayList<String> = ArrayList()
        
        for(i in 0..paths.size-1) {
            src.add(i, paths[i][0])
            dest.add(i, paths[i][1])
        }
        
        for(i in 0..paths.size-1) {
            var count = 0
            for(j in 0..paths.size-1) {
                if(dest[i] != src[j]) {
                    count ++;
                }
            }
            if(count == paths.size)
                return dest[i]
        }
        return dest[0]
    }
}