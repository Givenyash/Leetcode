/**
 * @param {number[]} nums
 * @return {void} Do not return anything, modify nums in-place instead.
 */
var sortColors = function(nums) {
    let i = 0;
    let j = i+1;

    while(i<nums.length-1){
        if(j>= nums.length){
            i++;
            j = i + 1;
            continue;
        }
        if(nums[j] === 0 && (nums[i] === 1 || nums[i] === 2)){
            let temp = nums[i];
            nums[i] = nums[j];
            nums[j] = temp;
        }
        else if(nums[j] === 1 && nums[i] === 2){
            let temp = nums[i];
            nums[i] = nums[j];
            nums[j] = temp;
        }
        j++;
    }
};