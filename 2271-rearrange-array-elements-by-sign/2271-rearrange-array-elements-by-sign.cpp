class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        int posIndex = 0;
        int negIndex = 1;
        vector<int> ans(n,0);

        for(int i = 0; i<n; i++){
            if(nums[i] < 0){
                ans[negIndex] = nums[i];
                negIndex += 2;
            }
            else{
                ans[posIndex] = nums[i];
                posIndex += 2;
            }
        }
        return ans;
    }
};