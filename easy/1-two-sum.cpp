class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> new_nums;
        for (int i = 0; i != nums.size(); i++) {
            for (int j = i + 1; j != nums.size(); j++) {
                if ((nums[i] + nums[j] == target) && (i != j)) {
                    new_nums.push_back(i);
                    new_nums.push_back(j);
                    return new_nums;
                }
            }
        }
        return new_nums;
    };
};