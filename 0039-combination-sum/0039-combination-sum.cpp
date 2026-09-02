class Solution {
public:
    void helper(vector<int>& candidates, int sum, vector<vector<int>>& ans, vector<int>& curr, int ind){
        if(sum == 0){
            ans.push_back(curr);
            return;
        }
        if(ind == candidates.size() || sum < 0) return;
        sum -= candidates[ind];
        curr.push_back(candidates[ind]);
        helper(candidates,sum,ans,curr,ind);
        sum += candidates[ind];
        curr.pop_back();
        helper(candidates,sum,ans,curr,ind+1);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> curr;
        helper(candidates,target,ans,curr,0);
        return ans;
    }
};