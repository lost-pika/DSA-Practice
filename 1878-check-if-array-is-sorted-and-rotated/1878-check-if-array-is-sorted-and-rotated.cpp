class Solution {
public:
    bool check(vector<int>& nums) {
        int count = 0;  // Count how many times the order is violated
        int n = nums.size();

        for(int i = 0; i < n; i++) {
            if(nums[i] > nums[(i+1) % n]) {  // Check for decreasing order
                count++;
            }
        }

        return count <= 1; // It should have at most one drop to be a rotated sorted array
    }
};
