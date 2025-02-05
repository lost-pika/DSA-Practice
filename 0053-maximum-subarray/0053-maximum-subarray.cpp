class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_sum = nums[0]; // Overall maximum subarray sum
        int curr_max = nums[0]; // Maximum subarray sum ending at the current position

        for(int i = 1; i<nums.size(); i++){
             // Update curr_max to include the current element or start fresh from nums[i]
            curr_max = std::max(nums[i], curr_max + nums[i]);

             // Update max_sum if curr_max is greater
            max_sum = std::max(curr_max, max_sum);
        }
        
        return max_sum;
    }
};