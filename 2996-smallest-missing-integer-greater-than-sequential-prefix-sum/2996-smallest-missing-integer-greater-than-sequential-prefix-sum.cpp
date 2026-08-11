class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int total = nums[0];
        for(int i=1; i<nums.size(); i++){
            if(nums[i] - nums[i-1] == 1){
                total += nums[i];
            }
            else{
                break;
            }
        }
        unordered_map<int,int>mp;
        for(int x : nums){
            mp[x]++;
        }

        while(mp.contains(total)){
            total++;
        }
        return total;
    }
};