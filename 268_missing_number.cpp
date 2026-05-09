class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int> ans;

        // unordered_set<int>ans(nums.begin(), nums.end());
        for(auto a: nums){
            ans.insert(a);
        }

        for(int i=0; i<=n; i++){
            if(ans.contains(i) == 0){
                return i;
            }
            // if(ans.find(i) == ans.end()){
            //     return i;
            // }
        }
        return -1;
    }
};