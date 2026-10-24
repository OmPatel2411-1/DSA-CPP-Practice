class Solution {
public:
    int dijkstra(int n, vector<vector<int>>& edges,
                 int source, int destination) {
        vector<vector<pair<int, int>>> adj(n);

        for (auto& e : edges) {
            adj[e[0]].push_back({e[1], e[2]});
            adj[e[1]].push_back({e[0], e[2]});
        }

        vector<long long> dist(n, LLONG_MAX);
        priority_queue<
            pair<long long, int>,
            vector<pair<long long, int>>,
            greater<pair<long long, int>>
        > pq;

        dist[source] = 0;
        pq.push({0, source});

        while (!pq.empty()) {
            auto [d, u] = pq.top();
            pq.pop();

            if (d != dist[u])
                continue;

            for (auto [v, w] : adj[u]) {
                if (dist[v] > d + w) {
                    dist[v] = d + w;
                    pq.push({dist[v], v});
                }
            }
        }

        return dist[destination] == LLONG_MAX
                   ? INT_MAX
                   : (dist[destination] > INT_MAX
                          ? INT_MAX
                          : (int)dist[destination]);
    }

    vector<vector<int>> modifiedGraphEdges(
        int n, vector<vector<int>>& edges,
        int source, int destination, int target) {

        const int INF = 2000000000;

        for (auto& e : edges) {
            if (e[2] == -1)
                e[2] = INF;
        }

        int shortest = dijkstra(n, edges, source, destination);

        if (shortest < target)
            return {};

        if (shortest == target)
            return edges;

        for (auto& e : edges) {
            if (e[2] != INF)
                continue;

            e[2] = 1;

            shortest = dijkstra(n, edges, source, destination);

            if (shortest <= target) {
                e[2] += target - shortest;

                for (auto& remaining : edges) {
                    if (remaining[2] == INF)
                        remaining[2] = INF;
                }

                return edges;
            }
        }

        return {};
    }
};