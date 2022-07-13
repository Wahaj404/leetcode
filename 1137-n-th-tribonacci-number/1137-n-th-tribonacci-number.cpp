class Solution {
public:
    int tribonacci(int n) {
        auto a = 0u, b = 1u, c = 1u;
        for (int i = 0; i < n; ++i) {
            auto d = a + b + c;
            a = b;
            b = c;
            c = d;
        }
        return a;
    }
};