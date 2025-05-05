class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int lengthNum = nums.size();
        int calculate = (lengthNum*(lengthNum+1))/2;
        int sum = 0;
        for(int i=0;i<nums.size();i++){
            sum  = sum + nums[i];
        }
        return calculate - sum;
    }
};