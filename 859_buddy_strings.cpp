class Solution {
public:
    bool buddyStrings(string s, string goal) {
        if(goal.size() != s.size()){
            return false;
        }

        if(s == goal){
            set<char> temp(s.begin(), s.end());
            return temp.size() < goal.size();
            // duplicate characters only s = aa , goal = aa  
        }

       vector<int> ans;

       for(int i=0; i<s.size(); i++){
           if(s[i] != goal[i]){
               ans.push_back(i);
            }
        }

        if(ans.size() != 2){
            return false;
        }
        swap(s[ans[0]], s[ans[1]]);

        return s == goal;
    }
};