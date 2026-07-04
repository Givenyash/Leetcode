class Solution {
public:
    bool canReorderDoubled(vector<int>& arr) {
        unordered_map<int,int>freq;

        for(auto i : arr){
            freq[i]++;
        }

        sort(arr.begin(), arr.end(), [](int a, int b){
            return abs(a) < abs(b);
        });

        for(auto x : arr){
            if(freq[x] == 0) continue;
            if(freq[2*x] == 0) return false;

            freq[x]--;
            freq[2*x]--;
        }

        return true;
    }
};