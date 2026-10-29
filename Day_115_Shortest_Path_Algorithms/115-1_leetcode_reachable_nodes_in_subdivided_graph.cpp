class Solution {
public:
    int reachableNodes(vector<vector<int>>& edges, int maxMoves, int n) {
        vector<vector<pair<int, int>>> adj(n);

        for (auto& e : edges) {
            int u = e[0], v = e[1], cnt = e[2];
            adj[u].push_back({v, cnt + 1});
            adj[v].push_back({u, cnt + 1});
        }

        vector<int> dist(n, INT_MAX);
        priority_queue<pair<int, int>,
                       vector<pair<int, int>>,
                       greater<pair<int, int>>> pq;

        dist[0] = 0;
        pq.push({0, 0});

        while (!pq.empty()) {
            auto [d, u] = pq.top();
            pq.pop();

            if (d != dist[u]) continue;

            for (auto [v, cost] : adj[u]) {
                if (d + cost < dist[v]) {
                    dist[v] = d + cost;
                    pq.push({dist[v], v});
                }
            }
        }

        int ans = 0;
        for (int i = 0; i < n; i++) {
            if (dist[i] <= maxMoves) {
                ans++;
            }
        }

        for (auto& e : edges) {
            int u = e[0], v = e[1], cnt = e[2];

            int fromU = (dist[u] == INT_MAX)
                        ? 0
                        : max(0, maxMoves - dist[u]);

            int fromV = (dist[v] == INT_MAX)
                        ? 0
                        : max(0, maxMoves - dist[v]);

            ans += min(cnt, fromU + fromV);
        }

        return ans;
    }
};
