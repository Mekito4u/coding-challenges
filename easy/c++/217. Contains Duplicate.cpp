class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int result;
        unordered_set<int> seen;
        for(int i = 0;i < nums.size();i++){
            if(seen.contains(nums[i])){
                return 1;
            }
            seen.insert(nums[i]);
        }
        return 0;
    }
};