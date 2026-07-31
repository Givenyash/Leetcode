class Solution {
public:
    int minimumPushes(string word) {
        vector<int> freq(26,0);
        for(int x : word){
            freq[x - 'a']++;
        }
        sort(freq.begin(), freq.end(), greater<int>());
        // sort(freq.rbegin(), freq.rend());

        int count=0;
        for(int i=0; i<26; i++){
            if(freq[i]==0) break;

            if(i<8){
                count += freq[i];
                continue;
            }
            if(i<16){
                count += freq[i]*2;
                continue;
            }
            if(i<24){
                count += freq[i]*3;
                continue;
            }
            if(i<26){
                count += freq[i]*4;
                continue;
            }
        }
        return count;
    }
};