class Solution {
public:
    int similarPairs(vector<string>& words) {
        vector<set<char>> str;

        for(int i=0; i<words.size(); i++){
            set<char> st(words[i].begin(), words[i].end());
            str.push_back(st);
        }
        int cnt = 0;
        for(int i=0; i<words.size()-1; i++){
            for(int j=i+1; j<words.size(); j++){
                if(str[i] == str[j]){
                    cnt++;
                }
            }
        }
        return cnt;
    }
};