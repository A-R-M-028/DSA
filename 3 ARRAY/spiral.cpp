class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
    
        int m = matrix.size();
        vector<int> ans;
        int n = matrix[0].size();
        int totalElement = m * n;
        int sRow = 0;
        int eCol = n - 1;
        int eRow = m - 1;
        int sCol = 0;
        int count = 0;
        while (totalElement > count) {
            // printing starting row
            for (int i = sCol; i <= eCol && totalElement > count; i++) {
                ans.push_back(matrix[sRow][i]);
                count++;
            }
            sRow++;
            // ending col
            for (int i = sRow; i <= eRow && totalElement > count; i++) {
                ans.push_back(matrix[i][eCol]);
                count++;
            }
            eCol--;
            // ending row
            for (int i = eCol; i >= sCol && totalElement > count; i--) {
                ans.push_back(matrix[eRow][i]);
                count++;
            }
            eRow--;
            // starting col
            for (int i = eRow; i >= sRow && totalElement > count; i--) {
                ans.push_back(matrix[i][sCol]);
                count++;
            }
            sCol++;
        }
            return ans;

    }

        
    };