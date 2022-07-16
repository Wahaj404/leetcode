class Solution {
public:
    int rob(vector<int>& nums) {
        auto n = nums.size();
        if (n >= 2) {
            nums[1] = max(nums[0], nums[1]);
        }
        for (int i = 2; i < n; ++i) {
            nums[i] = max(nums[i - 1], nums[i] + nums[i - 2]);
        }
        return *max_element(nums.begin(), nums.end());
    }
};