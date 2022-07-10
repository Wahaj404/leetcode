class Solution {
public:
    vector<int> shortestAlternatingPaths(int n, vector<vector<int>> redEdges,
                                     vector<vector<int>> blueEdges) {
    vector<vector<int>> g(n, vector<int>(n));
    for (auto v : redEdges) {
        g[v[0]][v[1]] |= 1;
    }
    for (auto v : blueEdges) {
        g[v[0]][v[1]] |= 2;
    }
    vector<int> dist(n, -1);
    set<pair<int, int>> vis;
    queue<tuple<int, int, int>> q;
    q.emplace(0, 0, 0);
    while (!q.empty()) {
        auto [u, c, d] = q.front();
        q.pop();
        dist[u] = dist[u] == -1 ? d : min(dist[u], d);
        for (int v = 0; v < n; ++v) {
            auto cc = g[u][v] & ~c;
            if (g[u][v] != 0 && cc != 0 && vis.count({v, cc}) == 0) {
                if (cc == 3) {
                    vis.insert({v, 1});
                    vis.insert({v, 2});
                    q.emplace(v, 1, d + 1);
                    q.emplace(v, 2, d + 1);
                } else {
                    vis.insert({v, cc});
                    q.emplace(v, cc, d + 1);
                }
            }
        }
    }
    return dist;
}
};