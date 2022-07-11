class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        for (int i = 0; i < 201; ++i) {
            for (auto const& s : strs) {
                if (i == s.length() || strs[0][i] != s[i]) {
                    return s.substr(0, i);
                }
            }
        }
        return "";
    }
};