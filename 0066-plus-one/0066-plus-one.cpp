class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        for(int i = n-1; i>=0; i--){
            if(digits[i] < 9){
                digits[i]++;
                return digits;
            }
            digits[i] = 0;  // carry to the next left digit
        }

        // If we reach here, it means all digits were 9 (e.g., 999 -> 1000)
        digits.insert(digits.begin(), 1);
        return digits;
    }
};