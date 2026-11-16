class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        unordered_map<char,int>a;
        int l = 0 , r = 0;
        int len = 0;
        while(r < n){
            if(a[s[r]] != 0){
                while(a[s[r]] != 0){
                    a[s[l]]--;
                    l++;
                }
            }
            len = max(len , r-l+1);
            a[s[r]]++;
            r++;
        }
        return len;
    }
};