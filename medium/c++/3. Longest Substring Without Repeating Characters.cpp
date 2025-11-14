class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> seen;
        int max_cnt = 0;
        int right = 0, left = 0;

        for(right;right < s.size(); right++){
            while(seen.count(s[right])){
                seen.erase(s[left++]);
            }

            seen.insert(s[right]);
            max_cnt = max(max_cnt, right - left + 1);
        }

        return max_cnt;
    }
};