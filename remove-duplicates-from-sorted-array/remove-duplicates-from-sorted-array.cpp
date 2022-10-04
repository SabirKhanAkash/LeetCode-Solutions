class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count = 0;
        for(int i=0; i<nums.size()-1; i++)
        {
            if(nums[i] == nums[i+1])
                nums.at(i) = 101;
            // cout<<nums[i]<<" ";
        }
        sort(nums.begin(),nums.end());
        // reverse(nums.begin(),nums.end());
            
        for(int i=0; i<nums.size(); i++) {
            if(nums[i] != 101)
                count++;
            cout<<nums[i]<<" ";
        }
        return count;
    }
};