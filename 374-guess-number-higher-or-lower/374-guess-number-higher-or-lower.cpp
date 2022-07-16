/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        auto lo = 1, hi = n;
        while (true) {
            auto mid = lo + ((hi - lo) >> 1);
            auto g = guess(mid);
            if (g == 1) {
                lo = mid + 1;
            } else if (g == -1) {
                hi = mid - 1;
            } else {
                return mid;
            }
        }
        return -1;
    }
};