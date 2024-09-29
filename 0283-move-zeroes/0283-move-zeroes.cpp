class Solution {
public:
    void moveZeroes(vector<int>& nums) {
     int number = 0;
     for(int i=0;i<nums.size();i++){
        if(nums[i]!=0){
            nums[number] = nums[i];
            number++;
        }
     }
     for(int i=number;i<nums.size();i++){
        nums[i]=0;
     }   
    }
};