class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> numvec;
        for(int i=0;i<nums.size();i++){
            numvec.push_back(nums[nums[i]]);
        }
        return numvec;
    }
};