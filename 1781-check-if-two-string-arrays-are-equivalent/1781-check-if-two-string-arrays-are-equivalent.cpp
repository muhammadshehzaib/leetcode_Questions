class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string result = "";
         for (const string& s : word1) {
            result += s; 
    }
        string result1 = "";
        for (const string& s : word2) {
            result1 += s; 
    }
    if(result==result1){
        return true;
    }
        return false;
    }
};