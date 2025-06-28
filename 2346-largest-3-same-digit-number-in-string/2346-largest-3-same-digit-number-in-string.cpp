class Solution {
public:
    string largestGoodInteger(string nums) {
        int n = nums.length();

        char maxChar = 0;

        for(int i = 2; i<n; i++){
            if(nums[i] == nums[i-1] && nums[i] == nums[i-2]){
                maxChar = max(maxChar, nums[i]);
            }
        }

        if(maxChar == 0){
            return "";
        }

        return string(3, maxChar);

    }
};