class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxSum = 0;
        int r = accounts.size();
        int c = accounts[0].size();

        for(int i=0; i<r; i++){
            int sum = 0;
            for(int j=0; j<c; j++){
                sum = sum + accounts[i][j];
            }
            maxSum = max(maxSum, sum);
        }
        return maxSum;
    }
};