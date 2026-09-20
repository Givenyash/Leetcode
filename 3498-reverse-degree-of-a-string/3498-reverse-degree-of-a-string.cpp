class Solution {
public:
    int reverseDegree(string s) {
        int sum = 0;
        for(int i=0; i<s.size(); i++){
            int revValue = 26 - (s[i] - 'a');
            int pos = i + 1;
            sum = sum + (revValue * pos);
        }
        return sum;
    }
};