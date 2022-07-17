class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int lo = 0, hi = arr.size() - 1;
        while (lo <= hi) {
            auto mid = lo + ((hi - lo) >> 1);
            auto le = arr[mid - 1] < arr[mid], ri = arr[mid] > arr[mid + 1];
            if (le && ri) {
                return mid;
            } else if (le) {
                lo = mid;
            } else if (ri) {
                hi = mid;
            }
        }
        return -1;
    }
};