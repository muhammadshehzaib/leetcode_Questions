class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> duplicates;
        map<int,int> myMap;

        for(int number:nums){
            myMap[number]++;
        }

        for(const auto&pair : myMap){
            if(pair.second>1){
                duplicates.push_back(pair.first);
            }
        }
        return duplicates;
    }
};