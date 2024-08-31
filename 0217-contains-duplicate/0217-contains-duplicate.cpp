class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        std::set<int> sets(nums.begin(), nums.end());
        if(nums.size()>sets.size()){
            return true;
        }
        return false;

    }
};