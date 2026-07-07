class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        vector<int>freq(nums.size(),0);

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