class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        vector<int>freq(n,0);

        int ans = 0;
        for(auto num : nums){
            freq[num]++;

            if(freq[num] > 1){
               ans = num;
               break;
            }
        }
        return ans;
    }
};