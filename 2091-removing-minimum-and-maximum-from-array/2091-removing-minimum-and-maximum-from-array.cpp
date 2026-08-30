class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int maxVal = INT_MIN;
        int maxIdx = 0;
        int minVal = INT_MAX;
        int minIdx = 0;

        if(nums.size() <= 2){
            return nums.size();
        }

        for(int i=0; i<nums.size(); i++){
            if(nums[i] > maxVal){
                maxVal = nums[i];
                maxIdx = i;
            }
            if(nums[i] < minVal){
                minVal = nums[i];
                minIdx = i;
            }
        }
        int n = nums.size();
        if(minIdx > maxIdx){
            swap(minIdx, maxIdx);        
        }
        int front = maxIdx + 1;
        int back = n - minIdx;
        int both = (minIdx + 1) + (n - maxIdx);

        return min(front, min(back, both));
    }
};