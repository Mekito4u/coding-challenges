class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> row(rowIndex + 1, 1);
        long long current = 1;
    
        for (int i = 1; i <= rowIndex / 2; i++) {
            current = current * (rowIndex - i + 1) / i;
            row[i] = current;
            row[rowIndex - i] = current;
        }
    
        return row;
    }
};