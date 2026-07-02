class Solution {
public:
    int smallestDistancePair(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());

        int minDist = 0;
        int maxDist = nums.back() - nums.front();

        while(minDist < maxDist){
            int mid = minDist + (maxDist - minDist)/2;

            if(countPair(nums,mid) < k){
                minDist = mid + 1;
            }
            else{
                maxDist = mid;
            }
        }

        return minDist;
    }

    int countPair(vector<int>& nums, int target){
        int count = 0;
        int l = 0;

        for(int r = 1; r < nums.size(); ++r){
            while(nums[r] - nums[l] > target){
                ++l;
            }
            count = count + (r-l);
        }
        return count;
    }
};