class Solution {
public:
    int peopleAwareOfSecret(int n, int d, int f) {
        auto M = 1000000007;
        vector<int> v(n, 0);
        v[d] = v.front() = 1;
        for (int i = d + 1; i < n; ++i) {
            v[i] = ((v[i - 1] + v[i - d]) % M - (i >= f ? v[i - f] : 0) + M) % M;
        }
        return accumulate(v.end() - f, v.end(), 0,
                          [M](int a, int b) { return (a + b) % M; });
    }
};