/**
 * @param {number} x
 * @return {boolean}
 */
var isPalindrome = function(x) {
    let og = x;
    let sum = 0;
    while(x > 0){
        sum = sum * 10 + x % 10;
        x = Math.floor(x/10);
    }
    if(og !== sum){
        return false;
    }
    return true;
};