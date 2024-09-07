class Solution {
public:
    int strStr(string haystack, string needle) {
        int m = haystack.size();
        int n = needle.size();

        if (m==0){
            return 0;
        }
        if(n>m){
            return -1;
        }
        for(int i=0;i<=m-n;i++){
            int j=0;
            while(j<n && haystack[i+j] == needle[j]){
                j++;
            }
            if(j==n){
                return i;
            }
        }
        return -1;
    }
};