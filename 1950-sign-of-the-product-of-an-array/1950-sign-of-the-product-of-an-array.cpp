class Solution {
public:
    int arraySign(vector<int>& nums) {
        int count = 0;

        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                return 0;
            }
            else{
                if(nums[i]<=-1){
                    count++;
                }
            }
          }
        return count%2==0 ? 1 : -1;
    }
};