class Solution {
public:
    int rob(vector<int>& nums) {
        if (nums.size() == 1) {
            return nums.front();
        }
        auto f = [](vector<int> nums) {
            auto n = nums.size();
            if (n >= 2) {
                nums[1] = max(nums[0], nums[1]);
            }
            for (int i = 2; i < n; ++i) {
                nums[i] = max(nums[i - 1], nums[i] + nums[i - 2]);
            }          
            return *max_element(nums.begin(), nums.end());  
        };
        auto x = nums.front();
        nums.front() = 0;
        auto a = f(nums);
        nums.front() = x;
        nums.back() = 0;
        return max(a, f(nums));
    }
};