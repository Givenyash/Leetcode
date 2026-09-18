class Solution {
public:
    int CheckPossible(vector<int>& bloomDay, int m, int k, int mid){
        int noOfFlower = 0;
        int noOfBouquets = 0;

        for(int x : bloomDay){
            if(x <= mid){
                noOfFlower++;
                if(noOfFlower == k){
                    noOfBouquets++;
                    noOfFlower = 0;
                    if(noOfBouquets >= m){
                        return true;
                    }
                }
            }
            else{
                noOfFlower = 0;
            }
        }
        return false;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        if((long)m*k > bloomDay.size()){
            return -1;
        }
        int low = *min_element(bloomDay.begin(), bloomDay.end());
        int high = *max_element(bloomDay.begin(), bloomDay.end());

        while(low <= high){
            int mid = low + (high - low)/2;

            if(CheckPossible(bloomDay,m,k,mid)){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return low;
    }
};