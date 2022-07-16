class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        for (int i = 0; i < nums.size(); ++i) {
            mp[nums[i]] = i;
        }
        if ((target & 1) == 0) {
            auto h = target >> 1;
            if (mp.count(h) == 1) {
                for (int i = mp[h] - 1; i >= 0; --i) {
                    if (nums[i] == h) {
                        return {i, mp[h]};
                    }
                }
            }
        }
        for (auto [x, i] : mp) {
            auto it = mp.find(target - x);
            if (it != mp.end() && it->first != x) {
                return {i, it->second};
            }
        }
        return {};
    }
};