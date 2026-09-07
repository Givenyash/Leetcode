class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();
        if(n == 1)return {-1};

        int larger = -1;
        for(int i=n-1; i>=0; i--){
            int curr = arr[i];
            arr[i] = larger;

            if(curr > larger){
                larger = curr;
            }
        }
        return arr;
    }
};