class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int sing = nums[0];

        for(int i = 1; i<nums.size(); i++){
            sing = sing ^ nums[i];
        }

        return sing;
    }
};