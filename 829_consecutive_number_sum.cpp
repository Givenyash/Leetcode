class Solution {
public:
    int consecutiveNumbersSum(int n) {
        int count = 1;  // n itself (single number case)

        for(int k=2; k*(k-1)/2 < n; k++){
            int target = k * (k - 1) / 2;

            if( (n - target) % k == 0){
                count++;
            }
        }

        return count;
    }
};