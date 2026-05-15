class Solution {
public:
    bool isGood(int n){
        bool valid = false;

        // TC => O(N log N)
        // SC => O(1)

        while(n > 0){  // check the digit
            int k = n % 10;

            //if it contains 3 or 4 or 7, return immediately false...
            if(k == 3 or k == 4 or k == 7){  
                return false;
            }

            //if it contains any of 2,5,6,9 then it is valid...
            if(k == 2 or k == 5 or k == 6 or k == 9){ 
                valid = true;
            }

            n = n/10;
        }

        return valid;
    }

    int rotatedDigits(int n) {
        int count = 0;

        // check if the number is valid then count it from 1 to n...
        for(int i=1; i<=n; i++){
            if(isGood(i)){
                count++;
            }
        }

        return count;
    }
};