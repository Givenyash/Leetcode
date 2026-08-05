class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        unordered_map<int,int>mp;
        int n = nums.size();
        for(int x : nums){
            if(x % 2 == 0) mp[x]++;
        }
        int max = 0;
        int ans = -1;
        for(auto it : mp){
            int num = it.first;
            int freq = it.second;
            if(freq > max or (freq==max and num < ans)){
                max = freq;
                ans = num;
            }
        }
        return ans;
    }
};