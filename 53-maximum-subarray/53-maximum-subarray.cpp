class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        auto a = nums.front(), c = 0;
        for (auto i : nums) {
            c += i;
            a = max(a, c);
            if (c < 0) c = 0;
        }
        return a;
    }
};