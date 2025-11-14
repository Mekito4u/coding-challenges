class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int i = 0;
        bool flag = false;
        for(int j = 0;j < nums.size();j++){
            if(nums[j] >= target){
                i = j;
                flag = true;
                break;
            }
        }
        if(flag){return i;}
        return nums.size();
    }
};