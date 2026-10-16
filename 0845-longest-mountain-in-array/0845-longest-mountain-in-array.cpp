class Solution {
public:
    int longestMountain(vector<int>& arr) {
        if(arr.size() < 3){
            return 0;
        }

        int maxLen = 0;

        for(int i=1; i<arr.size()-1; i++){
            if(arr[i] > arr[i-1] and arr[i] > arr[i+1]){
                int l = i;
                int r = i;

                while(l > 0 and arr[l] > arr[l-1]){
                    l--;
                }
                while(r < arr.size()-1 and arr[r] > arr[r+1]){
                    r++;
                }
                int currLen = r - l + 1;
                maxLen = max(maxLen, currLen);
            }
        }
        return maxLen;
    }
};