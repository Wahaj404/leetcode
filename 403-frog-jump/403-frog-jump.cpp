class Solution {
public:
    bool canCross(vector<int> stones) {
        if (stones[1] != 1) return false;
        auto last = stones.back();
        stones.pop_back();
        unordered_map<long, unordered_set<long>> v;
        v[1] = {1};
        for (long cur : stones) {
            for (long x : v[cur]) {
                long next = cur + x;
                v[next - 1].insert(x - 1);  
                v[next].insert(x);
                v[next + 1].insert(x + 1);
            }
            v.erase(cur);
        }
        return v.count(last);
    }
};