class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int res;
        sort(nums.begin(),nums.end());
        for(int i=0; i<nums.size() - 1; )
        {
            if(nums[i] == nums[i+1])
                i = i+2;
            else
            {
                res = i;
                break;
            }
                
        }
        return nums[res];
    }
};