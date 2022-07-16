class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        vector<bool> v(n);
        v.front() = true;
        for (int i = 0; i < n && v[i] && !v.back(); ++i) {
            for (int j = min(n - 1, i + nums[i]); !v[j]; --j) {
                v[j] = true;
            }
        }
        return v.back();
    }
};