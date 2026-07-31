class Solution {
public:
    int minimumPushes(string word) {
		vector<int> f(26, 0);
        for (char ch : word){
			++f[ch - 'a'];
		}
		sort(f.begin(), f.end(), greater());
		int ans = 0;
		for (int i = 0; i < 26; ++i) {
			ans += ((i / 8) + 1) * f[i];
		}
		return ans;
    }
};