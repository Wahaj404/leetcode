class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> a(256), b(256);
        for (char ch : magazine) {
            ++a[ch];
        }
        for (char ch : ransomNote) {
            ++b[ch];
        }
        for (int i = 0; i < 256; ++i) {
            if (a[i] < b[i]) {
                return false;
            }
        }
        return true;
    }
};