class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        std::vector<int> char_map(256, -1);

        int max_length = 0;
        int start = 0;

        for (int end = 0; end < s.length(); ++end) {

            if (char_map[s[end]] >= start) {
                start = char_map[s[end]] + 1;
            }

            char_map[s[end]] = end;

            max_length = std::max(max_length, end - start + 1);
        }

        return max_length;
    }
};
