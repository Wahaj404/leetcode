class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        auto ans = 0;
        auto n = s.length();
        for (int i = 0; i < n; ++i) {
            set<char> st;
            for (int j = i; j < n; ++j) {
                if (st.count(s[j])) {
                    break;
                }
                st.insert(s[j]);
            }
            ans = max(ans, static_cast<int>(st.size()));
        }
        return ans;
    }
};