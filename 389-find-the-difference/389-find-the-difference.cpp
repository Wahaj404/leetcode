class Solution {
public:
    char findTheDifference(string s, string t) {
        vector<int> a(26, 0), b(26, 0);
        for (auto c : s) ++a[c - 'a'];
        for (auto c : t) ++b[c - 'a'];
        for (auto i = 0; i < 26; ++i) {
            if (a[i] != b[i]) {
                return i + 'a';
            }
        }
        return '\0';
    }
};