class Solution {
public:
    void helper(string digits, vector<string>& ans, string temp, vector<string>& combos, int idx){
        if(idx == digits.size()){
            ans.push_back(temp);
            return;
        }
        int digit = digits[idx] - '0';
        for(int i=0;i<combos[digit].size();i++){
            helper(digits,ans,temp+combos[digit][i],combos,idx+1);
        }
    }
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        vector<string> combos = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        string temp = "";
        helper(digits,ans,temp,combos,0);
        return ans;
    }
};