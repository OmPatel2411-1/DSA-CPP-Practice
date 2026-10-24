class Graph {
private:
    vector<vector<pair<int, int>>> adj;
    int n;

public:
    Graph(int n, vector<vector<int>>& edges) {
        this->n = n;
        adj.resize(n);

        for (auto& e : edges) {
            adj[e[0]].push_back({e[1], e[2]});
        }
    }

    void addEdge(vector<int> edge) {
        adj[edge[0]].push_back({edge[1], edge[2]});
    }

    int shortestPath(int node1, int node2) {
        vector<int> dist(n, INT_MAX);

        priority_queue<
            pair<int, int>,
            vector<pair<int, int>>,
            greater<pair<int, int>>
        > pq;

        dist[node1] = 0;
        pq.push({0, node1});

        while (!pq.empty()) {
            auto [d, node] = pq.top();
            pq.pop();

            if (d > dist[node])
                continue;

            if (node == node2)
                return d;

            for (auto& [next, weight] : adj[node]) {
                if (dist[next] > d + weight) {
                    dist[next] = d + weight;
                    pq.push({dist[next], next});
                }
            }
        }

        return -1;
    }
};