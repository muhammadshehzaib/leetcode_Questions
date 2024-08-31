class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int> nums;
        int subtract = 0;
        for(int i=0;i<gain.size();i++){
            subtract = gain[i] + subtract;
            nums.push_back(subtract);
        }
        int number=0;
        for(int i=0;i<nums.size();i++){
            if(number<nums[i]){
                number = nums[i];
            }
        }
        return number;

    }
};