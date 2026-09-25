class Solution {
public:
    int minReorder(int n, vector<vector<int>>& connections) {
        vector<vector<pair<int, int>>> graph(n);

        for (auto& edge : connections) {
            int u = edge[0];
            int v = edge[1];

            graph[u].push_back({v, 1});

            graph[v].push_back({u, 0});
        }

        return dfs(0, -1, graph);
    }

private:
    int dfs(int node, int parent,
            vector<vector<pair<int, int>>>& graph) {

        int changes = 0;

        for (auto& [next, cost] : graph[node]) {
            if (next == parent)
                continue;

            changes += cost;
            changes += dfs(next, node, graph);
        }

        return changes;
    }
};
