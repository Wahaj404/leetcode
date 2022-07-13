class Solution {
public:
    int fib(int n) {
        int a = 0, b = 1;
        for (int i = 1; i < n; ++i) {
            auto c = a + b;
            a = b;
            b = c;            
        }
        return n == 0 ? a : b;
    }
};