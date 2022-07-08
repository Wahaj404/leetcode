class Solution {
public:
    bool canCross(vector<int> stones) {
        if (stones[1] != 1) return false;
        auto last = stones.back();
        stones.pop_back();
        unordered_map<int, unordered_set<int>> v;
        v[1] = {1};
        for (auto cur : stones) {
            for (auto x : v[cur]) {
                auto next = cur + x;
                v[next - 1].insert(x - 1);  
                v[next].insert(x);
                v[next + 1].insert(x + 1);
            }
        }
        return v.count(last);
    }
};