class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        unordered_map<int,int>freq;

        for(int x : nums){
            freq[x]++;
        }
        int count = 0;
        int remove = 0;

        for(auto a : freq){
            count += a.second / 2;
            remove += a.second % 2;
        }
        vector<int>ans;
        ans.push_back(count);
        ans.push_back(remove);

        return ans;
    }
};