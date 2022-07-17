class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        auto n = nums.size();
        vector<int> le(n), ri(n);
        for (int i = 1; i < n; ++i) {
            le[i] = nums[i - 1] + le[i - 1];
        }
        for (int i = n - 2; i >= 0; --i) {
            ri[i] = nums[i + 1] + ri[i + 1];
        }
        for (int i = 0; i < n; ++i) {
            if (le[i] == ri[i]) {
                return i;
            }
        } 
        return -1;
    }
};