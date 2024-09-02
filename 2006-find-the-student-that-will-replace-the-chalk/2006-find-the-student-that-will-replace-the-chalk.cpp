class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        long long totalSum = accumulate(chalk.begin(),chalk.end(),0LL);
        k = k % totalSum;
        for(int i=0;i<chalk.size();i++){
            if(k<chalk[i]){
                return i;
            }
            k= k-chalk[i];
        }
        return 0;
    }
};