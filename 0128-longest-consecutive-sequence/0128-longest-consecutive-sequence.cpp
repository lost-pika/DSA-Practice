class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if(n == 0) return 0;
        int cntCurr = 0;
        int longest = 1;
        int lastSmaller = INT_MIN;
        sort(nums.begin(), nums.end());
        for(int i = 0; i<n; i++){
            if(nums[i]-1 == lastSmaller){
                cntCurr++;
                lastSmaller = nums[i];
            }
            else if(nums[i] != lastSmaller){
                cntCurr = 1;
                lastSmaller = nums[i];
            }
            longest = max(longest, cntCurr);
        }
        return longest;
    }
};