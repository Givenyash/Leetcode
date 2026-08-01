class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> nums = heights;
        sort(nums.begin(), nums.end());

        int j = 0;
        int count = 0;

        for(int x=0; x<heights.size(); x++){
            if(heights[x] != nums[j]) count++;
            j++;
        }
        return count;
    }
};