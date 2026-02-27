#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;

        // Step 1: Fill with 1s
        for (int i = 0; i < numRows; ++i)
            ans.push_back(vector<int>(i + 1, 1));

        // Step 2: Fill inner values
        for (int i = 2; i < numRows; ++i)
            for (int j = 1; j < ans[i].size() - 1; ++j)
                ans[i][j] = ans[i - 1][j - 1] + ans[i - 1][j];

        return ans;
    }
};

int main() {
    int n;
    cin >> n;   // number of rows

    Solution obj;
    vector<vector<int>> result = obj.generate(n);

    // Print Pascal Triangle
    for (int i = 0; i < result.size(); i++) {
        for (int j = 0; j < result[i].size(); j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}