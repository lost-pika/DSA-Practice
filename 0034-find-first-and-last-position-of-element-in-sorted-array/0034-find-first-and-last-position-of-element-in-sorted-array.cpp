class Solution {
public:
    int lowerBound(vector<int> arr, int n, int x) {
        int low = 0;
        int high = arr.size() - 1;
        int ans = arr.size();
        while (low <= high) {
            int mid = (low + high) / 2;
            if (arr[mid] >= x) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return ans;
    }

    int upperBound(vector<int>& arr, int x, int n) {
        int low = 0;
        int high = arr.size() - 1;
        int ans = arr.size();
        while (low <= high) {
            int mid = (low + high) / 2;
            if (arr[mid] > x) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int lb = lowerBound(nums, nums.size(), target);
        if(lb == nums.size() || nums[lb] != target) return {-1, -1};
        return {lb, upperBound(nums, target, nums.size()) - 1};
    }
};