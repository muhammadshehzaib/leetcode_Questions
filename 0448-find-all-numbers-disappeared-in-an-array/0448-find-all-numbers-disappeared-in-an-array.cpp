class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        set<int> mySet(nums.begin(),nums.end());
        vector<int> number;
        for(int i=1;i<=nums.size();i++){
            if(mySet.find(i)==mySet.end()){
                number.push_back(i);
            }
        }
        return number;
    }
};