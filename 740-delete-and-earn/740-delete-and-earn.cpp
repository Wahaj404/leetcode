class Solution {
    constexpr static auto mx = 10006;
    int freq[mx] = {0};
public:
    int deleteAndEarn(vector<int>& nums) {
        for (auto i : nums) {
            ++freq[i];
        }
        for (int i = 0; i < mx; ++i) {
            freq[i] *= i;
        }
        int v[mx] = {0};
        v[1] = freq[1];
        for (int i = 2; i < mx; ++i) {
            v[i] = max(freq[i] + v[i - 2], v[i - 1]);
        }
        return v[mx - 1];
    }
};