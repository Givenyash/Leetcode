class Solution {
public:
    bool isIsomorphic(string s, string t) {
        vector<int>S(256,0);
        vector<int>T(256,0);

        if(s.size() != t.size()) return false;

        for(int i=0; i<s.size(); i++){
            if(S[s[i]] != T[t[i]]){
                return false;
            }
            S[s[i]] = i + 1;
            T[t[i]] = i + 1;
        }
        return true;
    }
};