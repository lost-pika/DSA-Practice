
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();
        int n = row * col;
        int low = 0;
        int high = n - 1;

        // converting 2D matrix to 1D matrix and then applying binary search
        while (low <= high) {
            int mid = low + (high - low) / 2;
            int rowIndex = mid / col;
            int colIndex = mid % col;
            int currNumber = matrix[rowIndex][colIndex];

            if (currNumber == target) {
                return true;
            } else if (currNumber < target) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return false;
    }
};