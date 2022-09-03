class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int theta = nums.size() / 2;
        int ans;
        sort(nums.begin(),nums.end());
        
        return nums[theta];
    }
};