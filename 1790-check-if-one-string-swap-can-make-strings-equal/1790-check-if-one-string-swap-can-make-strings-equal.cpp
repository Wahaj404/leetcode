class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        auto n = s1.length();
        vector<int> v;
        for (int i = 0; i < n; ++i) {
            if (s1[i] != s2[i]) {
                if (v.size() == 2) {
                    return false;
                }
                v.push_back(i);
            }
        }
        if (v.size() < 2) {
            return v.size() == 0;
        }
        auto i = v[0], j = v[1];
        return s1[i] == s2[j] && s1[j] == s2[i];
    }
};