class Solution {
    fun diagonalSum(mat: Array<IntArray>): Int {
        var frontSum = 0
        var backSum = 0
        var middleMan = 0
        if(mat.size % 2 != 0) {
            middleMan = mat[mat.size/2][mat.size/2]
        }
        for(i in 0..mat.size-1) {
            frontSum += mat[i][i]
        }
        var i = 0
        var j = mat.size-1
        while(i<=mat.size-1 && j>=0) {
            backSum += mat[i][j]
            i++
            j--
        }
        return (frontSum+backSum) - middleMan
    }
}