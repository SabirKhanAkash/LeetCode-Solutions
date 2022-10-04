class Solution {
public:
    int bs(vector<int>& nums, int l, int h, int t)
    {
        int mid = l + (h-l)/2;
        if(l>h)
            return l;
        if(nums[mid] == t)
            return mid;
        else if(nums[mid] > t)
            return bs(nums,l,mid-1,t);
        else if(nums[mid] < t)
            return bs(nums,mid+1,h,t);
        else 
            return l;
    }
    
    int searchInsert(vector<int>& nums, int target) {
        int l=0, h = nums.size()-1;
        return bs(nums,l,h,target);
    }
};