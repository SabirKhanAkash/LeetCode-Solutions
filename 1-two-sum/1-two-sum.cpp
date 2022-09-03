class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ne;
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[j] == target - nums[i]) {
                    ne.push_back(i);
                    ne.push_back(j);
                    return ne;
                }
            }
        }
        return ne;
    }
};