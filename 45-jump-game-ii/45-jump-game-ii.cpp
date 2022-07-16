class Solution {
public:
    int jump(vector<int>& nums) {
        auto n = nums.size();
        vector<int> c(n);
        for (int i = 1; i < nums.size(); ++i) {
            auto mn = INT_MAX;
            for (int j = 0; j < i; ++j) {
                if (nums[j] + j >= i) {
                    mn = min(mn, c[j]);
                }
            }
            c[i] = mn + 1;
        }
        return c.back();
    }
};