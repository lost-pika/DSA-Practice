class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       unordered_set<int> set;
       int j = 0;

       for(int i = 0; i<nums.size(); i++){
        if(set.find(nums[i]) == set.end()){
            set.insert(nums[i]);
            nums[j++] = nums[i];
        }
       }

       return j;
    }
};