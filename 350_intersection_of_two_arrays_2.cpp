class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
       unordered_map<int,int> freq;
       vector<int>ans;

       for(auto a: nums1){
           freq[a]++;
        }

        for(auto a : nums2){
            if(freq[a] > 0){
                ans.push_back(a);
                freq[a]--;
            }
        }
        
      return ans; 
    }
};