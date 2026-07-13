class Solution {
public:
    int nextGreaterElement(int n) {
        vector<int> digits;

        int temp = n;
        while(temp > 0){
            digits.push_back(temp % 10);
            temp = temp / 10;
        }
        reverse(digits.begin(), digits.end());
        if(!next_permutation(digits.begin(), digits.end())) return -1;

        long long ans = 0;
        for(auto d : digits){
            ans = ans*10+d;
            if(ans > INT_MAX) return -1;
        }
        
        return (int)ans;
    }
};