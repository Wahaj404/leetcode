class Solution {
public:
    int arraySign(vector<int>& nums) {
        auto r = 1;
        for (auto i : nums) {
            r *= i < 0 ? -1 : i > 0 ? 1 : 0;
        }
        return r;
    }
};