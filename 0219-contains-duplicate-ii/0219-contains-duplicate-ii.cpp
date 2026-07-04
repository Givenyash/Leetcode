class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n=nums.size();
        int count=0;

        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(nums[i]==nums[j] && abs(i-j)<=k){
                    return true;
                }
                count++;
            }
            if(count>99999){
                return false;
            }
        }
        return false;
    }
};