class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int>ans1(nums1.begin(), nums1.end());
        unordered_set<int>ans2;

        for(int i=0; i<nums2.size(); i++){
            if(ans1.contains(nums2[i])){
                ans2.insert(nums2[i]);
            }
        }
        return vector<int>(ans2.begin(), ans2.end());
    }
};