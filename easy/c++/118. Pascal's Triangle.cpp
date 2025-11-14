class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> nums(numRows);
        
        for(int i = 0;i < numRows;i++){
            vector<int> row(i+1, 1);

            if(i >= 2){
                for(int j = 1;j < i;j++){
                    row[j] = nums[i-1][j-1] + nums[i-1][j];
                }
            }

            nums[i] = row;
        }
        
        return nums;
    }
};