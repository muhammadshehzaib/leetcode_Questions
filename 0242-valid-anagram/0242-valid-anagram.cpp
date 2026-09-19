class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()){
            return false;
        }
        int frequency[26] = {0};
        for (char x : s) {
            frequency[x-'a']++;
    }
        for(char y:t){
            frequency[y-'a']--;
        }
        for(int x:frequency){
            if(x!=0){
                return false;
            }
        }
        return true;
    }
};