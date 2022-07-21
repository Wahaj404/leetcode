class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> a(256), b(256);
        for (char ch : s) {
            ++a[ch];
        }
        for (char ch : t) {
            ++b[ch];
        }
        for (int i = 0; i < 256; ++i) {
            if (a[i] != b[i]) {
                return false;
            }
        }
        return true;
    }
};