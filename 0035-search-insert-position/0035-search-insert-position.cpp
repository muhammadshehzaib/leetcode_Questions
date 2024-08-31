class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        for(int i=0;i<nums.size();i++){
            if(target==nums[i]){
                return i;
            }
        }
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]<target && nums[i+1]>target){
                nums.insert(nums.begin()+(i+1),target);
            }
        }
        if(nums[0]>target){
            nums.insert(nums.begin(),target);            
        }
        else if(nums[nums.size()-1]<target){
            nums.push_back(target);
        }

            int count;
            for(int i=0;i<nums.size();i++){
            if(target==nums[i]){
                count = i;
                break;
            }
        }
        return count;

    }
};