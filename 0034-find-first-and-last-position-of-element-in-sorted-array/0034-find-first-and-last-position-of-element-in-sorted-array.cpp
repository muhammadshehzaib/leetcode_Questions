class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> number;
        vector<int> number1;
         for(int i=0;i<nums.size();i++){
            if(target == nums[i]){
                number.push_back(i);
            }
        }
        if(number.size()==1){
            int sum = number[0];
            number.push_back(sum);
            return number;
        }
        else if(number.size()==2){
            return number;
        }
        else if(number.size()>2){
            number1.push_back(number[0]);
            int lastElement = number.back();
            number1.push_back(lastElement);
            return number1;
        }
        else{
            number.push_back(-1);
            number.push_back(-1);
        }
        return number;
    }
};