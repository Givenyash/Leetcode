class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.size();
        int m = needle.size();

        if(n < m){
            return -1;
        }
        
        for(int i=0; i<=n-m; i++){
            int count = 1;

            for(int j=0; j<m; j++){
                if(haystack[i+j] != needle[j]){
                    count = 0;
                    break;
                }
            }
            if(count == 1){
                return i;
            }
        }
        return -1;
    }
};