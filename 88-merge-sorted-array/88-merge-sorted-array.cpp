class Solution {
public:
    void merge(vector<int>& v, int m, vector<int>& q, int n) {
        auto i = 0, j = 0, k = 0;
        vector<int> p(v.begin(), v.begin() + m);
        while (i < m && j < n) {
            v[k++] = p[i] < q[j] ? p[i++] : q[j++];
        }
        while (i < m) {
            v[k++] = p[i++];
        }
        while (j < n) {
            v[k++] = q[j++];
        }
    }
};