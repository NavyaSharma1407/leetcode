class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int cnt = 0;
        int l = 0 , r = 0;
        int len = 0;
        while(r < n){
            if(nums[r] == 0) cnt++;
            if(cnt > k){
                while(nums[l] != 0){
                    l++;
                }
                l++;
                cnt--;
            }
            len = max(len , r-l+1);
            r++;
        }
        return len;
    }
};