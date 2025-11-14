> class Solution {
public:
    int romanToInt(string s) {
        int result = 0;
        map<char, int> roman = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000} };

        int prev_value = 0;
        int value = 0;
        for (char c : s) {
            value = roman[c];
            if (prev_value < value) {
                result -= 2*prev_value;
            }
            result += value;
            prev_value = value;
        }
        return result;
};  }