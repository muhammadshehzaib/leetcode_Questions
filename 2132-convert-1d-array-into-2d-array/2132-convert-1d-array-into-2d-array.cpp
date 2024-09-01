class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        int count=0;
        vector<vector<int>> number(m,vector<int>(n));
        if(original.size()!=m*n){
            return vector<vector<int>>();
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                number[i][j] = original[count];
                count++;
            }
        }
        return number;
    }
};