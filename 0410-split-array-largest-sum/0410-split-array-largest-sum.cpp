class Solution {
public:
    int countSubArrays(vector<int>& nums, int arraySum) {
        int subArrays = 1;
        long long subArraySum = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (subArraySum + nums[i] <= arraySum) {
                subArraySum += nums[i];
            } else {
                subArrays++;
                subArraySum = nums[i];
            }
        }
        return subArrays;
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