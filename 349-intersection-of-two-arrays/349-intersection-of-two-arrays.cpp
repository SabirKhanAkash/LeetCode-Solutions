class Solution {
public:
    vector<int>res;
    bool check(int n)
    {
        for(int i=0; i<res.size(); i++)
        {
            if(n == res[i])
                return false;
        }
        return true;
    }
    
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(), nums2.end());
        
        for(int i=0; i<nums1.size(); i++)
        {
            for(int j=0; j<nums2.size(); j++)
            {
                if(nums1[i] == nums2[j] && check(nums1[i]) == true)
                {
                    res.push_back(nums1[i]);
                    break;
                }
            }
        }
        return res;
    }
};