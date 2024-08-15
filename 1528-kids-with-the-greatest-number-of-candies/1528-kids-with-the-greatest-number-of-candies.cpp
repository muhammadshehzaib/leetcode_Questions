class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int number = INT_MIN;
        vector<bool> cand;
        for(int i=0;i<candies.size();i++){
            if(number<candies[i]){
                number = candies[i];
            }
        }

        for(int i=0;i<candies.size();i++){
            if(candies[i]+extraCandies>=number){
                cand.push_back(true);
            }
            else{
                cand.push_back(false);
            }

        }
        return cand;
        
    }
};