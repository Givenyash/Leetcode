class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int i : nums){
            if(i % 2 == 0){
                mp[i]++;
            }
        }
        if(mp.empty()) return -1;
        vector<pair<int,int>>freq(mp.begin(), mp.end());
        sort(freq.begin(), freq.end(), [](auto a, auto b){
            if(a.second == b.second){
                return a.first < b.first;
            }
            return a.second > b.second;
        });
        return freq[0].first;
    }
};