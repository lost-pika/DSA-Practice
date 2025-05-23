class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int row = mat.size();
        int col = mat[0].size();
        int maxOnes = -1;
        int rowIndex = 0;

        for(int i = 0; i<row; i++){
            int onesCount = 0;
            for(int j = 0; j<col; j++){
                if(mat[i][j] == 1) onesCount++;
            }

            if(onesCount > maxOnes){
                maxOnes = onesCount;
                rowIndex = i;
            }
        }
        return {rowIndex, maxOnes};
    }
};
