class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int> uniqueSet(nums.begin(),nums.end());
        
        if(uniqueSet.size()<3){
            return *uniqueSet.rbegin();
        }

        auto it = uniqueSet.rbegin();
        std::advance(it,2);
        return *it;



    }
};