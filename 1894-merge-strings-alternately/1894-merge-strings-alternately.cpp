class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        vector<char> charVector(word1.begin(),word1.end());
        vector<char> charVector1(word2.begin(),word2.end());
        vector<char> combinedVector;
        
        size_t minSize = min(charVector.size(),charVector1.size());
        
        for(int i=0;i<minSize;i++){
            combinedVector.push_back(charVector[i]);
            combinedVector.push_back(charVector1[i]);
        }
        if(charVector.size()>minSize){
            combinedVector.insert(combinedVector.end(),charVector.begin()+minSize,charVector.end());
        }
        else if(charVector1.size()>minSize){
            combinedVector.insert(combinedVector.end(),charVector1.begin()+minSize,charVector1.end());
        }

        string str(combinedVector.begin(),combinedVector.end());
        return str;
    }
};