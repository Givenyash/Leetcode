class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>ans(nums.begin(), nums.end());
        int maxLen = 0;

        for(auto a: ans){
            if(ans.count(a-1) == 0){
                int curr = a;
                int length = 1;

                while(ans.count(curr + 1)){
                    curr++;
                    length++;
                }
                maxLen = max(maxLen, length);
            }
        }
        return maxLen;
    }
};