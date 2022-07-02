class Solution {
public:
    int f(vector<int> const& v, int t, int i, int n, int r) {
        if (i == n) return t == r;
        return f(v, t, i + 1, n, r - v[i]) + f(v, t, i + 1, n, r + v[i]);
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        return f(nums, target, 0, nums.size(), 0);
    }
};