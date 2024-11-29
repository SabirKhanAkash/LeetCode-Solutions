class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> output;

        if (nums.empty())
            return output;

        bool isConsecutive = true;
        int start = nums[0];
        for (int i = 1; i <= nums.size(); i++) {
            if (i == nums.size() ||
                static_cast<long long>(nums[i]) -
                        static_cast<long long>(nums[i - 1]) !=
                    1) {
                if (start != nums[i - 1])
                    output.push_back(to_string(start) + "->" +
                                     to_string(nums[i - 1]));
                else
                    output.push_back(to_string(start));
                if (i < nums.size())
                    start = nums[i];
            }
        }
        return output;
    }
};