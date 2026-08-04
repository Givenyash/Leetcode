class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int mx = *max_element(nums.begin(), nums.end());
        int mn = *min_element(nums.begin(), nums.end());
        
        unordered_map<int,int>mp;

        for(auto x : nums){
            mp[x]++;
        }
        vector<int>ans;

        for(int i=mn; i<= mx; i++){
            if(!mp.contains(i)){
                ans.push_back(i);
            }
        }
        return ans;
    }
};