class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> frequency;
        for (int num : nums) {
        frequency[num]++;
    }
    int max=0;
    int maxVal = 0;
     for (const auto& pair : frequency) {
        if(pair.second>max){
        max= pair.second;
        maxVal = pair.first;
        }
    }
    return maxVal;
    }
};