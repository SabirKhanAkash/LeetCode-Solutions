class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int x = nums.size();
        int i;
        for(i=0; i<x; i++)
        {
            if(i != nums[i])
                break;
        }
        return i;
    }
};