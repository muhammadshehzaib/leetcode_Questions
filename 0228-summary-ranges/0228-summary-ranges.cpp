class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> result;
        vector<int> number;
        if (nums.empty())
            return {};

        int start = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] != nums[i - 1] + 1) {
                if (start == nums[i - 1]) {
                    result.push_back(to_string(start));
                    start = nums[i];
                } else {
                    result.push_back(to_string(start) + "->" +
                                     to_string(nums[i - 1]));
                    start = nums[i];
                }
            }
        }
        if (start == nums.back()) {
            result.push_back(to_string(start));
        }
        else {
            result.push_back(to_string(start) + "->" + to_string(nums.back()));
}
        return result;
    }
};