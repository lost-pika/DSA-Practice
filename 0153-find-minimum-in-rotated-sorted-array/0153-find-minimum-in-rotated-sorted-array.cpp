class Solution {
public:
    int findMin(vector<int>& nums) {
        int low = 0;
        int high = nums.size() - 1;
        int ans = INT_MAX;
        while(low <= high){
            int mid = (low+high)/2;

            // search speace is already sorted
            // then always arr[low] will be smaller
            // in that search space
            if(nums[low] <= nums[high]){
                ans = min(ans, nums[low]);
                break;
            }

            if(nums[low] <= nums[mid]){
                ans = min(ans, nums[low]);
                low = mid + 1;
            }
            else{
                ans = min(ans, nums[mid]);
                high = mid - 1;
            }
        }
        return ans;
    }
};