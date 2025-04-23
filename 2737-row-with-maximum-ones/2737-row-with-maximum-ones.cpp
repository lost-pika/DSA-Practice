class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int n = mat.size();          // number of rows
        int m = mat[0].size();       // number of columns
        int maxCount = -1;
        int rowIndex = 0;

        for (int i = 0; i < n; i++) {
            int onesCount = 0;
            for (int j = 0; j < m; j++) {
                if (mat[i][j] == 1) onesCount++;
            }

            if (onesCount > maxCount) {
                maxCount = onesCount;
                rowIndex = i;
            }
        }
        return {rowIndex, maxCount};
    }
};
