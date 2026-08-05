class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> mp;

        for(auto x : s){
            mp[x]++;
        }
        vector<pair<char, int>> freq(mp.begin(), mp.end());
        sort(freq.begin(), freq.end(), [](auto a, auto b){
            return a.second > b.second;
        });

        string ans="";
        for(auto x : freq){
            ans += string(x.second, x.first);
        }
        return ans;
    }
};