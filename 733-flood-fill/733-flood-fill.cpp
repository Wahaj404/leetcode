class Solution {
    void f(vector<vector<int>>& img, int i, int j, int s, int c) {
        if (i >= 0 && i < img.size() && j >= 0 && j < img[i].size() && img[i][j] == s) {
            img[i][j] = c;
            f(img, i - 1, j, s, c);
            f(img, i, j - 1, s, c);
            f(img, i + 1, j, s, c);
            f(img, i, j + 1, s, c);
        }
    }
public:
    vector<vector<int>> floodFill(vector<vector<int>>& img, int sr, int sc, int c) {
        if (img[sr][sc] != c) f(img, sr, sc, img[sr][sc], c);
        return img;
    }
};