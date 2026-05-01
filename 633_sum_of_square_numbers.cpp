class Solution {
public:
    bool judgeSquareSum(int c) {
        long long start = 0;
        long long end = sqrt(c);

        while(start <= end){
            long long mid = start*start + end*end;

            if(mid == c){
                return true;
            }
            else if(mid > c){
                end--;
            }
            else{
                start++;
            }
        }
        return false;
    }
};