class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        string line;
        vector<string> result;

        if(nums.size() == 0){return result;}

        int left = 0;
        for(int right = 1; right < nums.size();right++){
            if(nums[right] != (nums[right-1]+1)){
                if(left == (right-1)){
                    line = to_string(nums[left]);
                }
                else{
                    line = to_string(nums[left]) + 
                    "->" + to_string(nums[right-1]);
                }
                result.push_back(line);
                left = right;
            }
        }
        if(left == nums.size()-1){
            line = to_string(nums[left]);
        }
        else{
            line = to_string(nums[left]) + 
            "->" + to_string(nums[nums.size()-1]);
        }
        result.push_back(line);
        return result;
    }
};