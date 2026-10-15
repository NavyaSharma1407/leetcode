class Solution {
public:
    int subarrayGCD(vector<int>& nums, int k) {
        int n = nums.size();
        int cnt = 0;
        for(int i=0;i<n;i++){
            int curr = nums[i];
            for(int j=i;j<n;j++){
                if(nums[j] % k != 0 || nums[j] < k) break;
                curr = gcd(curr,nums[j]);
                if(curr == k) cnt++;
            }
        }
        return cnt;
    }
};