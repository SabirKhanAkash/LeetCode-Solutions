class Solution {
public:
    int BS(vector<int>& arr, int target)
    {
        int low = 0, high = arr.size()-1;
        while(low<=high)
        {
            int mid = low+(high-low)/2;

            if(target <= arr[mid])
                high = mid - 1;
            else
                low = mid + 1;
        }
        return low;
        
    }
    
    vector<int> searchRange(vector<int>& nums, int target) {
        int l = BS(nums,target);
        int r = BS(nums,target+1)-1;
        
        if(l < nums.size() && nums[l]==target)
            return {l,r};
        else
            return {-1,-1};
    }
};