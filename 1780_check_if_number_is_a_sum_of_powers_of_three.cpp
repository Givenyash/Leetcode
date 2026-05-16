class Solution {
public:
// if a number is not divisible by 3 then it gives remainder == 1 or 2 
// if it is divisible then remainder == 0

    bool checkPowersOfThree(int n) {
        while(n > 0){

            // because it does not accepts the remainder 2
            if(n % 3 == 2){ 
                return false;
            }
            n = n/3;
        }
        // because powers of three accepts only 2 remainders :- 1 and 0
        return true;
    }
};