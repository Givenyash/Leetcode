class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int>ans;
        for(auto x : operations){
            int n = ans.size();
            if(x == "+"){
                ans.push_back(ans[n-1] + ans[n-2]);
            }
            else if(x == "D"){
                ans.push_back(2*ans.back());
            }
            else if(x == "C"){
                ans.pop_back();
            }
            else{
                ans.push_back(stoi(x));
            }
        }
        int total = 0;
        for(int x : ans){
            total += x;
        }
        return total;
    }
};