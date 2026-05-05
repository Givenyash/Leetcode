class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int count = 0;
        unordered_map<int,int>mp;

        for(int i=0; i<stones.size(); i++){
            mp[stones[i]]++;
        }
        for(int i=0; i<jewels.size(); i++){
            if(mp.count(jewels[i])){
                count = count + mp[jewels[i]];
            }
        }
        return count;
    }
};