class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int j=0,flag = 0;
        vector<int> nums1;
        if(k>nums.size())
            k = k%nums.size();
        for(int i=0; i<nums.size(); i++)
        {
            cout<<"k: "<<k<<" ";
            if(k!=0 && flag == 0) {
                nums1.push_back(nums[nums.size()-k]);
                k--;
            }
            else {
                flag = 1;
                nums1.push_back(nums[k]);
                k++;
            }
            
                
        }
        for(int i=0; i<nums1.size(); i++)
            nums[i] = nums1[i];
    }
};