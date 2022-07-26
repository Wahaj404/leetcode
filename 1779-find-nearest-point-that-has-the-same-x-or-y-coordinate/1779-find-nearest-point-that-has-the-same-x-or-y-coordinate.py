class Solution:
    def nearestValidPoint(self, x: int, y: int, points: List[List[int]]) -> int:
        mn = float('inf')
        res = -1;
        for idx, (i, j) in enumerate(points):
            if i == x or j == y:
                dist = abs(i - x) + abs(j - y)
                if mn > dist :
                    mn = dist
                    res = idx;
        return res
        