#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int  i = 0, j = matrix[0].size()-1;
        while (i<matrix.size() && j>=0){
            if (matrix[i][j] == target) return true;
            else if (target>matrix[i][j]) i+=1;
            else if (target<matrix[i][j]) j-= 1;
        }
        return false;
    }
};

int main() {

    int rows, cols;
    cin >> rows >> cols;

    vector<vector<int>> matrix(rows, vector<int>(cols));

    // input matrix
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            cin >> matrix[i][j];
        }
    }

    int target;
    cin >> target;

    Solution obj;

    if(obj.searchMatrix(matrix, target))
        cout << "Found";
    else
        cout << "Not Found";

    return 0;
}