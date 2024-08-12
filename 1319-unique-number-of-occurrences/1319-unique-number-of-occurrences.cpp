class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int> myMap;
        for(int num:arr){
            myMap[num]++;
        }
        set<int> occurance;
        for(const auto& pair : myMap){
            occurance.insert(pair.second);
        }

        if(occurance.size()==myMap.size()){
            return true;
        }
        return false;
    }
};