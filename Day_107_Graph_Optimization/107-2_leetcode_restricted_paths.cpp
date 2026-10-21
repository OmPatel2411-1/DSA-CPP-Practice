class Solution {
public:
    const int MOD = 1e9 + 7;

    int countRestrictedPaths(int n, vector<vector<int>>& edges) {
        vector<vector<pair<int, int>>> adj(n + 1);

        for (auto& e : edges) {
            int u = e[0], v = e[1], w = e[2];
            adj[u].push_back({v, w});
            adj[v].push_back({u, w});
        }

        vector<long long> dist(n + 1, LLONG_MAX);
        priority_queue<
            pair<long long, int>,
            vector<pair<long long, int>>,
            greater<pair<long long, int>>
        > pq;

        dist[n] = 0;
        pq.push({0, n});

        while (!pq.empty()) {
            auto [d, u] = pq.top();
            pq.pop();

            if (d > dist[u]) continue;

            for (auto [v, w] : adj[u]) {
                if (dist[v] > d + w) {
                    dist[v] = d + w;
                    pq.push({dist[v], v});
                }
            }
        }

        vector<int> order(n);
        iota(order.begin(), order.end(), 1);

        sort(order.begin(), order.end(), [&](int a, int b) {
            return dist[a] < dist[b];
        });

        vector<int> dp(n + 1, 0);
        dp[n] = 1;

        for (int u : order) {
            for (auto [v, w] : adj[u]) {
                if (dist[u] > dist[v]) {
                    dp[u] = (dp[u] + dp[v]) % MOD;
                }
            }
        }

        return dp[1];
    }
};