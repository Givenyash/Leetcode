class Solution {
public:
    void solve(int index, vector<vector<int>>&ans, vector<int>&curr, vector<int>nums){
            if(index == nums.size()){
                ans.push_back(curr);
                return;
            }

            curr.push_back(nums[index]);
            solve(index + 1, ans, curr, nums);
            curr.pop_back();

            // Skip duplicates
            while(index + 1 < nums.size() && nums[index] == nums[index + 1]){
                index++;
            }
            solve(index + 1, ans, curr, nums);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        
        vector<vector<int>>ans;
        vector<int>curr;
        int index = 0;

        solve(index, ans, curr, nums);
        return ans;
    }
};