class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        if(n == 1) return true;
        int maxReach = 0;
        for(int i=0;i<n-1;i++){
            if(nums[i] == 0 && maxReach > i) continue;
            else if(nums[i] == 0 && maxReach == i) return false;
            maxReach = max(maxReach , i+nums[i]);
            if(maxReach >= n-1) return true;
        }
        return true;
    }
};