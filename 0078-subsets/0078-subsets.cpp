class Solution {
public:
    void solve(int index, vector<vector<int>>&ans, vector<int>curr, vector<int>nums){
            if(index == nums.size()){
                ans.push_back(curr);
                return;
            }
            solve(index + 1, ans, curr, nums);
            curr.push_back(nums[index]);
            solve(index + 1, ans, curr, nums);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>curr;
        int index = 0;

        solve(index, ans, curr, nums);
        return ans;
    }
};