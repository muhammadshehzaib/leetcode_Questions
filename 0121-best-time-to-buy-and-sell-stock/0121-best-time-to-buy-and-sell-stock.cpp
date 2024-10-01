class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minimum = prices[0];
        int number = 0 ;
        for(int i=1;i<prices.size();i++){
            if(minimum>prices[i]){
                minimum = prices[i];
            }
            else{
                number = max(number,prices[i]-minimum);
            }
        }
        return number;
    }
};