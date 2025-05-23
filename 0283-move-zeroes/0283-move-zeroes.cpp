class Solution {
public:
    void swap(int i, int j, vector<int> &nums){
        int temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
    }
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int j = -1;
        // place the j pointer
        for(int i = 0; i<n; i++){
            if(nums[i] == 0){
                j = i;
                break;
            }
        }

        // no-non zero elements
        if(j == -1) return;

        for(int i = j+1; i<n; i++){
            if(nums[i] != 0){
                swap(i, j, nums);
                j++;
            }
        }
    }
};