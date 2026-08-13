class Solution {
public:
    int longestPalindrome(string s) {
       unordered_map<char, int>mp;
       for(auto x : s) mp[x]++;

       int count = 0;
       bool oddFound = false;

       for(auto j : mp){
            if(j.second % 2 == 0){
                count += j.second;
            }
            else{
                count = count + j.second - 1;
                oddFound = true;
            }
        }
        if(oddFound) count++;
        return count;
    }
};