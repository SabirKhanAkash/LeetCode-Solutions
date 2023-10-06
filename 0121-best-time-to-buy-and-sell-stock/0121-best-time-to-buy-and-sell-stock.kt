class Solution {
    fun maxProfit(prices: IntArray): Int {
        var minBuy: Int = 10000
        var maxSell: Int = 0
        for(i in 0..prices.size-1) {
            minBuy = minOf(minBuy, prices[i])
            maxSell = maxOf(maxSell, (prices[i] - minBuy))
        }
        return maxSell
    }
}