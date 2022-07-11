class Solution {
public:
    int strStr(string haystack, string needle) {
        if (needle == "") return 0;
        int x = needle.length();
        int l = haystack.length();
        for (int i = 0; i + x <= l; ++i) {
            if (needle == haystack.substr(i, x)) {
                return i;
            }
        }
        return -1;
    }
};