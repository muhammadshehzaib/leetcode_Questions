class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int count=0,i=0;
        while(i<nums.size()){
            if(nums[i]!=val){
                nums[count] = nums[i];
                count++;
                i++;            
            }
            else{
                i++;
            }
    }   
        return count;   
    }
};