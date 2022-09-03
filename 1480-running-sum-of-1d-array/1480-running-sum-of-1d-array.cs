public class Solution {
    public int[] RunningSum(int[] nums) {
        var sum = 0;
        int[] arr = new int[nums.Length];
        for(int i=0 ; i<nums.Length; i++)
        {
            sum += nums[i];
            arr[i] = sum;
        }
        return arr;
    }
}