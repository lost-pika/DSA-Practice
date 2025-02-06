class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxi = 0;
        int counter = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == 1){
                counter ++;
                maxi = max(counter, maxi);
            }
            else{
                counter = 0;
            }
        }
        return maxi;
    }
};