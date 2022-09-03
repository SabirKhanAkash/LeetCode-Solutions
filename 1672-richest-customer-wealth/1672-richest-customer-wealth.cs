public class Solution {
    public int MaximumWealth(int[][] accounts) {
        var max = -9999;
        for(int i=0; i<accounts.Length; i++)
        {
            var sum = 0;
            for(int j=0; j<accounts[i].Length; j++)
            {
                sum += accounts[i][j];
            }
            if(sum > max)
                max = sum;
        }
        
        return max;
    }
}