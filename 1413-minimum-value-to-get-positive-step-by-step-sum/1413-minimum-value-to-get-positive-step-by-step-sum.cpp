class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int sum = 0;
        int minSum = 0;

        for(int x : nums){
            sum += x;\
            minSum = min(minSum, sum);
        }
        if(minSum < 1){
            return 1 - minSum;
        }
        return 1;
    }
};