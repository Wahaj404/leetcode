class Solution {
public:
    int numberOfMatches(int n) {
        auto c = 0;
        while (n > 1) {
            c += n >> 1;
            n = (n >> 1) + (n & 1);
        }
        return c;
    }
};