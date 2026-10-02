class Solution {
public:
    void helper(int n, vector<string> &ans, string &temp, int open = 0, int close = 0){
        if(open == n && close == n){
            ans.push_back(temp);
        }
        temp += '(';
        if(open < n) helper(n,ans,temp,open+1,close);
        temp.pop_back();
        if(close < open){
            temp += ')';
            helper(n,ans,temp,open,close+1);
            temp.pop_back();
        }
        return;
    }
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        string temp = "";
        helper(n,ans,temp);
        return ans;
    }
};