class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> freq;

        //inserting elements and its frequency into freq map...
        for(int i=0; i<nums.size(); i++){
            freq[nums[i]]++;
        }

        //insert all elements of freq into elements vector...
        vector<int>elements;
        for(auto a : freq){
            elements.push_back(a.first);
        }

        //sort the elements acc to their freq...
        sort(elements.begin(), elements.end(), [&](auto int a , int b){
            return freq[a] > freq[b];
        });

        //traversing the elements array till top k elements...
        vector<int>ans;
        for(int i=0; i<k; i++){
            ans.push_back(elements[i]);
        }

        return ans;
    }
};