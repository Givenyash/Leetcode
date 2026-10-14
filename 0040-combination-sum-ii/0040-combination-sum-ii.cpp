class Solution {
public:
    void check(int index, vector<int>&curr, vector<vector<int>>&ans, vector<int>&candidates, int sum, int target){
        // Base Cases
        if(sum > target){
            return;
        }

        if(index == candidates.size()){
            if(sum == target){
                ans.push_back(curr);
            }
            return;
        }

        curr.push_back(candidates[index]);
        check(index + 1, curr, ans, candidates, sum + candidates[index], target);

        // Backtrack
        curr.pop_back();

        while(index + 1 < candidates.size() and candidates[index] == candidates[index + 1]){
            index++;
        }

        check(index + 1, curr, ans, candidates, sum, target);
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());

        vector<vector<int>>ans;
        vector<int>curr;
        int index = 0;

        check(index, curr, ans, candidates, 0, target);
        return ans;
    }
};