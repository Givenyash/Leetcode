class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        if(nums.empty()) return {};

        int mx = *max_element(nums.begin(), nums.end());
        int mn = *min_element(nums.begin(), nums.end());
        
        unordered_set<int>st(nums.begin(), nums.end());
        vector<int>ans;

        for(int i=mn; i<= mx; i++){
            if(!st.count(i)) ans.push_back(i);
        }
        return ans;
    }
};