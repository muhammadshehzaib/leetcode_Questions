class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> nums1;
        vector<int> nums2;
        vector<int> nums3;
        for(int i=0;i<nums.size()/2;i++){
            nums1.push_back(nums[i]);
        }
        for(int i=nums.size()/2;i<nums.size();i++){
            nums2.push_back(nums[i]);
        }
        for(int i=0;i<nums1.size()&& nums2.size();i++){
            nums3.push_back(nums1[i]);
            nums3.push_back(nums2[i]);
        }
        return nums3;

    }
};