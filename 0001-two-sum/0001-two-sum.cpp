class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int,int>>numsWithIdx;
        for(int i=0;i<nums.size();i++){
            numsWithIdx.push_back({nums[i],i});
        }
        sort(numsWithIdx.begin(),numsWithIdx.end());
        int left = 0 , right = nums.size()-1;
        while(left < right){
            int sum = numsWithIdx[left].first + numsWithIdx[right].first;
            if(sum == target){
                return {numsWithIdx[left].second , numsWithIdx[right].second};
            }else if(sum > target){
                right--;
            }else{
                left++;
            }
        }
        return {-1,-1};
    }
};