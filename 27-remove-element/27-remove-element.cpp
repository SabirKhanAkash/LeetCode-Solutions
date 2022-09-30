class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        sort(nums.begin(),nums.end());
        int c=0;
        for(int i=0; i<nums.size(); )
        {
            if(nums[i] == val)
                nums.erase(nums.begin()+(i));
            else
            {
                c++;
                i++;
            }
        }
        return c;
    }
};