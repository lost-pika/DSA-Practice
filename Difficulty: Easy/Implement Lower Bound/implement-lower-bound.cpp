// User function Template for C++
class Solution {
  public:
    int lowerBound(vector<int>& arr, int target) {
       return lower_bound(arr.begin(), arr.end(), target) - arr.begin();
    }
};
