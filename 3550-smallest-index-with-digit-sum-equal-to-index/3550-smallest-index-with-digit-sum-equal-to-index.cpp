class Solution {
public:
    int add(int x){
        int sum = 0;
        while(x > 0){
            int k = x % 10;
            sum += k;
            x = x / 10;
        }
        return sum;
    }

    int smallestIndex(vector<int>& nums) {
        for(int i=0; i<nums.size(); i++){
            if(add(nums[i]) == i){
                return i;
            }
        }
        return -1;
    }
};