#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int left = 0;
        int right = n-1;
        int answer = 0;
        int rightmax = 0;
        int leftmax = 0;

        while(left < right){
            if(height[left] <= height[right]){
                if(leftmax >= height[left]){
                    answer += leftmax - height[left];
                }
                else{
                    leftmax = height[left];
                }
                left++;
            }
            else{
                if(rightmax >= height[right]){
                    answer += rightmax - height[right];
                }
                else{
                    rightmax = height[right];
                }
                right--;
            }
        }
        return answer;
    }
};

int main ()
{
      int n;
    cin >> n;   // size of array
    vector<int> height(n);

    for(int i = 0; i < n; i++){
        cin >> height[i];   // input elements
    }
    Solution obj;
    cout << obj.trap(height);
    
   return 0;
}