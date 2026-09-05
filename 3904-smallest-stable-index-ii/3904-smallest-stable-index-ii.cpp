class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int>arr(n);
        int maxi =  INT_MIN;
        for(int i=0;i<n;i++){
            if(nums[i] > maxi) maxi = nums[i];
            arr[i] = maxi;
        }
        int mini = INT_MAX;
        for(int i=n-1;i>=0;i--){
            if(nums[i] < mini) mini = nums[i];
            arr[i] = arr[i] - mini;
        }
        for(int i=0;i<n;i++){
            if(arr[i] <= k) return i;
        }
        return -1;
    }
};