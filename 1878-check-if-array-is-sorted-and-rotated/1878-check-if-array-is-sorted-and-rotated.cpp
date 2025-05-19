class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        vector<int> sorted(n);

        for(int r = 0; r < n; r++){
            int index = 0;
            for(int i = r; i<n; i++){
                sorted[index] = nums[i];
                index++;
            }

            for(int i = 0; i<r; i++){
                sorted[index] = nums[i];
                index++;
            }

            bool isSorted = true;

            // check if sorted
            for(int i = 0; i<n-1; i++){
                if(sorted[i] > sorted[i+1]){
                    isSorted = false;
                    break;
                }
            }

            if(isSorted == true){
                return true;
            }
        }
        return false;
    }
};
