#include<iostream>
#include<vector>
using namespace std;

    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();

        for(int i= 0; i<n-1; i++){
            for(int j = i+ 1; j<n; j++){
                if(nums[i] + nums[j] == target){
                    return {i,j};
                }
            }
        }
        return {};
    }

int main ()
{
    int n;
    cin>>n;

    vector<int>nums(n);

    for(int i =0; i<n; i++){
        cin>>nums[i];
    }

    int target;
    cin>>target;

    vector<int> result = twoSum(nums,target);

    for(int i =0; i<result.size(); i++){
    cout<<result[i]<<" ";
    }

   return 0;
}