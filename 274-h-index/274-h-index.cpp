class Solution {
public:
    int hIndex(vector<int>& citations) {
        sort(citations.begin(), citations.end(), greater<int>());
        auto c = 0;
        for (auto i = 0; auto ci : citations) {
            c += ci >= (++i);
        }
        return c;
    }
};