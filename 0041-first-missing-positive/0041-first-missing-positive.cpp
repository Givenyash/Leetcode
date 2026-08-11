class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int i = 1;
        unordered_map<int,int>mp;
        for(int x : nums) mp[x]++;
        while(mp.contains(i)) i++;
        return i;
    }
};