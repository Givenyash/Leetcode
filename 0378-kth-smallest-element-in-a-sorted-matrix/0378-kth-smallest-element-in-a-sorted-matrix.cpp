class Solution {
public:
    int f(vector<vector<int>>& matrix, int mid){
        int n = matrix.size();
        int r = n-1;
        int c = 0;
        int count = 0;

        while(r >= 0 and c < n){
            if(matrix[r][c] <= mid){
                count += r+1;
                c++;
            }
            else{
                r--;
            }
        }
        return count;
    }

    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int low = matrix[0][0];
        int n = matrix.size();
        int high = matrix[n-1][n-1];

        while(low < high){
            int mid = low + (high-low)/2;

            if(f(matrix, mid) < k){
                low = mid + 1;
            }
            else{
                high = mid;
            }
        }

        return low;
    }
};