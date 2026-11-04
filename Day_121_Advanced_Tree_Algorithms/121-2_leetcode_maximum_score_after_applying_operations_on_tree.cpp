class Solution {
public:
    long long dfs(int node, int parent,
                  vector<vector<int>>& adj,
                  vector<int>& values) {

        if (node != 0 && adj[node].size() == 1) {
            return values[node];
        }

        long long sum = 0;

        for (int child : adj[node]) {
            if (child == parent) continue;

            sum += dfs(child, node, adj, values);
        }

        return min(sum, (long long)values[node]);
    }

    long long maximumScoreAfterOperations(
        vector<vector<int>>& edges,
        vector<int>& values
    ) {
        int n = values.size();

        vector<vector<int>> adj(n);

        for (auto &e : edges) {
            int u = e[0];
            int v = e[1];

            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        long long total = 0;

        for (int x : values) {
            total += x;
        }

        long long minimumKeep = dfs(0, -1, adj, values);

        return total - minimumKeep;
    }
};
