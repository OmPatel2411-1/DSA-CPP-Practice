class Solution {
public:
    vector<vector<int>> adj;
    vector<int> count;

    bool dfsPath(int node, int parent, int dest) {
        if (node == dest) {
            count[node]++;
            return true;
        }

        for (int child : adj[node]) {
            if (child == parent) continue;

            if (dfsPath(child, node, dest)) {
                count[node]++;
                return true;
            }
        }

        return false;
    }

    pair<int, int> solve(int node, int parent, vector<int>& price) {

        int notHalved = count[node] * price[node];
        int halved = count[node] * (price[node] / 2);

        for (int child : adj[node]) {
            if (child == parent) continue;

            auto [a, b] = solve(child, node, price);

            notHalved += min(a, b);
            halved += a;
        }

        return {notHalved, halved};
    }

    int minimumTotalPrice(int n, vector<vector<int>>& edges, vector<int>& price, vector<vector<int>>& trips) {

        adj.resize(n);
        count.assign(n, 0);

        for (auto& e : edges) {
            adj[e[0]].push_back(e[1]);
            adj[e[1]].push_back(e[0]);
        }

        for (auto& trip : trips) {
            dfsPath(trip[0], -1, trip[1]);
        }

        auto [a, b] = solve(0, -1, price);

        return min(a, b);
    }
};
