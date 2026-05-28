class Solution {
public:
    string largestNumber(vector<int>& nums) {
        int n = nums.size();
        vector<string> ans;

        for(int i=0; i<n; i++){
            ans.push_back(to_string(nums[i]));
        }

        sort(ans.begin(), ans.end(), [](string a, string b){
            return a+b > b+a;
        });

        if(ans[0] == "0"){
            return "0";
        }

        string finalAns = "";
        for(int i=0; i<ans.size(); i++){
            finalAns = finalAns + ans[i]; 
        }

        return finalAns;
    }
};