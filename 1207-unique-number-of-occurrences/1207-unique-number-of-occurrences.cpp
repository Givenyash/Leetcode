class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> freq;
        for(int x : arr){
            freq[x]++;
        }
        unordered_set<int> check;
        for(auto x : freq){
            check.insert(x.second);
        }
        return freq.size() == check.size();
    }
};