class Solution {
public:
    long long removeZeros(long long n) {
        long long ans = 0;
        long long place = 1;

        while(n>0){
            int k = n%10;
            if(k != 0){
              ans = ans + (k * place);  
              place = place *10;
            }
            n = n/10;
        }
        return ans;
    }
};