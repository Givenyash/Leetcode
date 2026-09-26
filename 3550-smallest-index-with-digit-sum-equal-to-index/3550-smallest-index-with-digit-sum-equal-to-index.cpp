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
            int idx = i;
            int x = nums[i];

            if(add(x) == idx){
                return i;
            }
        }
        return -1;
    }
};