class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int,int>mp;

        for(int x : arr){
            mp[x]++;
        }
        int maxVal = 0;
        for(auto i : mp){
            if(i.first == i.second){
                if(i.second > maxVal){
                    maxVal = i.second;
                }
            }
        }
        if(maxVal == 0){
            return -1;
        }
        return maxVal;
    }
};