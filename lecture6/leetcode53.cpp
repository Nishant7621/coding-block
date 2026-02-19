class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int total_sum=nums[0];
        int max_sum=nums[0];
        for(int i=1;i<nums.size();i++){
            total_sum=max(nums[i],total_sum+nums[i]);
            max_sum=max(total_sum,max_sum);
        }
        return max_sum;
        
    }
};