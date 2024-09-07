class Solution {
public:
    bool isPalindrome(string s) {
        transform(s.begin(),s.end(),s.begin(),::tolower);
        string result;
        if(s.size()==1){
            return true;
        }
        for(char ch:s){
           if ((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9')) {
                result += ch;
            }   
        }
        cout<<result;
        int i=0;
        int j=result.size()-1;
        while(i<j){
            if(result[i]==result[j]){
                i++;
                j--;
            }
            else{
            return false;

            }
        }
        return true;

    }
};