class Solution {
public:
    string shiftingLetters(string s, vector<int>& shifts) {
        int n = shifts.size();
        long long curr = 0;

        vector<long long> ans(n);

        for(int i = n-1; i >= 0; i--){
            curr = (curr + shifts[i]) % 26;
            ans[i] = curr;
        }

        for(int i=0; i<n; i++){
            s[i] = 'a' + (s[i] - 'a' + ans[i]) % 26;
        }
        return s;
    }
};