class Solution {
public:
    void solve(string num, int target, vector<string>& ans, string exp, int index, long long value, long long prev){
        if(index == num.size()){
            if(value == target){
                ans.push_back(exp);
            }
            return;
        }
        for(int i=index;i<num.size();i++){
            if(i > index && num[index] == '0') break;
            string s = num.substr(index,i-index+1);
            long long curr = stoll(s);

            if(index == 0){
                solve(num,target,ans,s,i+1,curr,curr);
            }
            else{
                solve(num,target,ans,exp+"+"+s,i+1,value+curr,curr);
                solve(num,target,ans,exp+"-"+s,i+1,value-curr,-curr);
                solve(num,target,ans,exp+"*"+s,i+1,value-prev+prev*curr,prev*curr);
            }
        }
    }
    vector<string> addOperators(string num, int target) {
        vector<string>ans;
        solve(num,target,ans,"",0,0,0);
        return ans;
    }
};