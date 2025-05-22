class Solution {
public:
    int mySqrt(int x) {
        int low = 0;
        int high = x;
        int ans = -1;

        while(low <= high){
            long long int mid = low + (high - low)/2;

            if(mid*mid == x){
                return mid;
            }
            else if(mid*mid < x){
                ans = mid;
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
        return ans;
    }
};