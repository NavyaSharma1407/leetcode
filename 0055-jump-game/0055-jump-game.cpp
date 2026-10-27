class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        if(n > 1 && nums[0] == 0) return false;
        if(n == 1) return true;
        for(int i=0;i<n;i++){
            if(nums[i] == 0){
                bool possible = false;
                for(int j=0;j<i;j++){
                    if((nums[j] >= i-j+1) || (i==n-1 && nums[j] >= i-j)){
                        possible = true;
                        break;
                    }
                }
                if(!possible) return false;
            }
        }
        return true;
    }
};