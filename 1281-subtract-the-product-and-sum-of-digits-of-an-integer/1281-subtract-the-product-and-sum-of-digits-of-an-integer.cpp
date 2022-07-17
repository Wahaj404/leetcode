class Solution {
    int prod(int n) {
        return n == 0 ? 1 : (n % 10) * prod(n / 10);
    }
    int sum(int n) {
        return n == 0 ? 0 : (n % 10) + sum(n / 10);
    }
public:
    int subtractProductAndSum(int n) {
        return prod(n) - sum(n);
    }
};