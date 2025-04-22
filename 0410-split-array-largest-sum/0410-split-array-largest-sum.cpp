class Solution {
public:
    int countSubArrays(vector<int>& nums, int maxAllowedSum) {
        int subarrayCount = 1;
        long long currentSum = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (currentSum + nums[i] <= maxAllowedSum) {
                currentSum += nums[i];
            } else {
                subarrayCount++;
                currentSum = nums[i];
            }
        }
        return subarrayCount;
    }

    int splitArray(vector<int>& nums, int k) {
        int low = *max_element(nums.begin(), nums.end());
        int high = accumulate(nums.begin(), nums.end(), 0);
        while (low <= high) {
            int mid = (low + high) / 2;
            if (countSubArrays(nums, mid) > k) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return low;
    }
};