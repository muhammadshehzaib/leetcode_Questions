class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                count = count+1;
            }
            else if(nums[i]%3==0){
                count = count;

            }
            else if(nums[i]%4==0){
                count= count + 1;
            }
            else{
                count = count+1;
            }
        }
        return count;
    }
};