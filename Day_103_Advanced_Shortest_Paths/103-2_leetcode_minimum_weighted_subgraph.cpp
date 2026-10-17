
class Solution {
public:
    using ll = long long;
    const ll INF = LLONG_MAX / 4;

    vector<ll> dijkstra(int src, vector<vector<pair<int, int>>>& adj) {
        int n = adj.size();
        vector<ll> dist(n, INF);

        priority_queue<
            pair<ll, int>,
            vector<pair<ll, int>>,
            greater<pair<ll, int>>
        > pq;

        dist[src] = 0;
        pq.push({0, src});

        while (!pq.empty()) {
            auto [d, u] = pq.top();
            pq.pop();

            if (d != dist[u]) continue;

            for (auto [v, w] : adj[u]) {
                if (dist[v] > d + w) {
                    dist[v] = d + w;
                    pq.push({dist[v], v});
                }
            }
        }

        return dist;
    }

    long long minimumWeight(int n, vector<vector<int>>& edges,
                            int src1, int src2, int dest) {
        vector<vector<pair<int, int>>> adj(n), rev(n);

        for (auto& e : edges) {
            int u = e[0], v = e[1], w = e[2];
            adj[u].push_back({v, w});
            rev[v].push_back({u, w});
        }

        vector<ll> dist1 = dijkstra(src1, adj);
        vector<ll> dist2 = dijkstra(src2, adj);
        vector<ll> dist3 = dijkstra(dest, rev);

        ll ans = INF;

        for (int i = 0; i < n; i++) {
            if (dist1[i] == INF || dist2[i] == INF ||
                dist3[i] == INF) {
                continue;
            }

            ans = min(ans, dist1[i] + dist2[i] + dist3[i]);
        }

        return ans == INF ? -1 : ans;
    }
};
