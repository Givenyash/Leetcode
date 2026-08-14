class Solution {
public:
    int maximumLengthSubstring(string s) {
        int maxLen = 0;
        int l = 0;
        vector<int> freq(26);

        for(int r = 0; r<s.size(); r++){
            freq[s[r] - 'a']++;

            while(freq[s[r] - 'a'] > 2){
                freq[s[l++] - 'a']--;
            }
            maxLen = max(maxLen, r-l+1);;
        }
        return maxLen;
    }
};