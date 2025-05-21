class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n = arr.size();
        int low = 0;
        int high = n-1;

        while(low < high){
            int mid = low + (high-low)/2;

            if(arr[mid] < arr[mid+1]){
                // on the increasing part, go to the right
                low = mid + 1;
            }
            else{
                // either on the decreasing part or on the peak element, go to the left
                high = mid;
            }
        }
        return low;
    }
};