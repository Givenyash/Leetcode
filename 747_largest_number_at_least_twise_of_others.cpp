class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int max_val = 0;   //INT_MIN
        long long second_max = 0;  //INT_MIN
        int index = 0;

        for(int i=0; i<nums.size(); i++){
            if(nums[i] > second_max){
                if(nums[i] > max_val){
                    second_max = max_val;
                    max_val = nums[i];
                    index = i;
                }
                else{
                    second_max = nums[i];
                }
            }
        }
        if(max_val >= second_max*2){
            return index; 
        }
        else{
            return -1;
        }
       
    }
};