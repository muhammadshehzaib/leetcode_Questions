class Solution {
public:
    int minimumChairs(string s) {
        int person=0;
        int chair = 0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='E'){
                person++;
                if(person>chair){
                    chair++;
                }
            }
            else if(s[i]=='L'){
                person--;
            }
        }
            return chair;

        
        
    }
};