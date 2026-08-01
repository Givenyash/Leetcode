class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int, int> mp;

        for(int x : nums){
            mp[x]++;
        }

        vector<int>ans;
        int expression = nums.size()/3;

        for(auto a : mp){
            if(a.second > expression){
                ans.push_back(a.first);
            }
        }
        return ans;
    }
};