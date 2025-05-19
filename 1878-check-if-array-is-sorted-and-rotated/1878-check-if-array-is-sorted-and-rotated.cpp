class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        vector<int> sorted = nums;
        sort(sorted.begin(), sorted.end());

        for (int r = 0; r < n; r++) {
            bool isSorted = true;
            for (int i = 0; i < n; i++) {
                if (sorted[i] != nums[(i + r) % n]) {
                    isSorted = false;
                    break;
                }
            }

            if (isSorted == true) {
                return true;
            }
        }
        return false;
    }
};
