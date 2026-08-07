class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> position;

        int index = 0;
        for(auto x : nums2){
            position[x] = index;
            index++;
        }

        vector<int> ans;
        for(auto x : nums1){
            int pos = position[x];
            int greater = -1;

            for(int i = pos + 1; i < nums2.size(); i++){
                if(nums2[i] > x){
                    greater = nums2[i];
                    break;
                }
            }
            ans.push_back(greater);
        }
        return ans;
    }
};